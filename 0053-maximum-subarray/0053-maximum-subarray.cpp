class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN, curSum=0;

        for(int i=0;i<nums.size();i++){
            curSum+=nums[i];
            sum=max(sum, curSum);
            if(curSum<0) curSum=0;
            
        }
        return sum;
    }
};