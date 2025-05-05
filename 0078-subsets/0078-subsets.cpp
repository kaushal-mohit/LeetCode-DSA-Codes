class Solution {
public:
    void solve(int idx, vector<int> &nums, vector<int> &sub, vector<vector<int>> & res){
        if(idx==nums.size()){
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[idx]);
        solve(idx+1, nums, sub, res);
        sub.pop_back();
        solve(idx+1, nums, sub, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        solve(0,nums,sub,res);
        return res;
    }
};