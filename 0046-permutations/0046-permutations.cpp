class Solution {
public:
    void solve(int index, vector<int> &nums, vector<vector<int>> &perm){
        if(index==nums.size()){
            perm.push_back(nums);
        }

        for(int i=index;i<nums.size();i++){
            swap(nums[index], nums[i]);
            solve(index+1, nums, perm);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perm;
        solve(0,nums,perm);
        return perm;
    }
};