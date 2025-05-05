class Solution {
public:
    void solve(int idx, vector<int> &nums, vector<int> & sub, vector<vector<int>> &res){
        res.push_back(sub);

        for(int i=idx;i<nums.size();i++){
            if(i!=idx && nums[i]==nums[i-1]){
                continue;
            }
            sub.push_back(nums[i]);
            solve(i+1, nums, sub, res);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        sort(nums.begin(), nums.end());
        solve(0,nums,sub,res);
        return res;
    }
};