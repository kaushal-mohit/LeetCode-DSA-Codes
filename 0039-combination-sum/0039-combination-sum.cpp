class Solution {
public:
    void solve(int idx, vector<int> &comb, vector<int>& candidates, int target, vector<vector<int>> &res){
        if(idx>=candidates.size() || target<0) return;
        
        if(target==0){
            res.push_back(comb);
            return;
        }
        comb.push_back(candidates[idx]);
        solve(idx, comb, candidates, target-candidates[idx], res);
        comb.pop_back();
        solve(idx+1, comb, candidates, target, res);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        solve(0, comb, candidates, target, res);
        return res;
    }
};