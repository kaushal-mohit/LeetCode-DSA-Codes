class Solution {
public:

    vector<bool> sieveOfEratosthenes(int N) {
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false; 

        for (int i = 2; i * i <= N; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= N; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }
    vector<int> closestPrimes(int left, int right) {

        vector<bool> primes = sieveOfEratosthenes(right);
        vector<int> new_primes;

        for(int i=left;i<primes.size();++i){
            if(primes[i]==true) new_primes.push_back(i);
        }

        vector<int> res(2,-1);
        int mini=INT_MAX;
        
        if(new_primes.size()<2) return res;

        for(int i=0;i<new_primes.size()-1;++i){
            int diff=new_primes[i+1]-new_primes[i];
            if(diff<mini){
                mini=diff;
                res[0]=new_primes[i];
                res[1]=new_primes[i+1];
            }
        }
        return res;
        
    }
};