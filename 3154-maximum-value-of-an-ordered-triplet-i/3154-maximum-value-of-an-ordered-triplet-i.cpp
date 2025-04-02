class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long res = 0;
        int maxi = 0;
        int maxDiff = 0;

        for(int &x:nums){
            res = max(res, 1ll*maxDiff*x);
            maxDiff = max(maxDiff, maxi - x);
            maxi = max(maxi, x);
            
        }
        return res;   
    }
};