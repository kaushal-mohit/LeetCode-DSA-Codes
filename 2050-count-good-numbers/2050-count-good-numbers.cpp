class Solution {
public:
    const int MOD = 1e9+7;

    long long p(long long base, long long exp, long long mod){
        long long res=1;
        base%=MOD;

        while(exp){
            if(exp&1){
                res = (res * base) % MOD;
            }

            exp/=2;
            base =  (base * base)%MOD;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        // int even= n/2 + n%2;
        // int odd= n - even;
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long a = p(5, even, MOD);
        long long b = p(4, odd, MOD);
        return (int)((a * b) % MOD);

    }
};