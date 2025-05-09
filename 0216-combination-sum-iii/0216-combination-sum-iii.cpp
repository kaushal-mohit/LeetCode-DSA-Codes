class Solution {
public:
    void solve(int idx, int sum, vector<int> &comb, vector<vector<int>> &res, int k, int n){
        if(idx>10) return;
        cout<<idx<<' '<<sum<<endl;
        if(comb.size()==k){
            if(sum==n){
                res.push_back(comb);
                return;
            }
            return;
        }
        for(int i=idx;i<=9; i++){
            if(i>n) break;
            comb.push_back(i);
            solve(i+1, sum+i, comb, res, k, n);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> comb;
        solve(1, 0, comb, res, k, n);
        return res;
    }
};