class Solution {
public:
    void solve(int idx, vector<int> &comb, vector<vector<int>> &res, vector<int>& candidates, int target){
        //base
        if(target==0){
            res.push_back(comb);
            return;
        }
        
        if(target<0 || idx>=candidates.size()) return;

        for(int i=idx; i<candidates.size(); i++){
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            comb.push_back(candidates[i]);
            solve(i+1, comb, res, candidates, target-candidates[i]);
            comb.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> res;
        vector<int> comb;
        sort(candidates.begin(), candidates.end());
        solve(0, comb, res, candidates, target);
        return res;
        
    }
};