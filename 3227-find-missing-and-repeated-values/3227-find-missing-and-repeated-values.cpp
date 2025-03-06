class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> res(2);
        map<int,int> mp;
        for(auto x:grid){
            for(int i:x){
                mp[i]++;
            }
        }
        int n=grid.size();
        for(int i=1;i<=n*n;i++){
            if(mp[i]==2) res[0]=i;
            if(mp[i]==0) res[1]=i;
        }

        return res;
    }
};