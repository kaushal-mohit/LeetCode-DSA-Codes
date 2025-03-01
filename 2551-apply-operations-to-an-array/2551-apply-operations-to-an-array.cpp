class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int left=0;
        int n = nums.size();

        for(int i=0;i<n; ++i){
            if(i<n-1 && nums[i]==nums[i+1] && nums[i]!=0){
                nums[i]*=2;
                nums[i+1]=0;
            }

            if(nums[i]!=0){
                if(i!=left){
                    swap(nums[i], nums[left]);
                }
                left++;
            }
        }
        return nums;
    }
};