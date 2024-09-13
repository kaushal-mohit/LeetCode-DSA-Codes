class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        vector<int> prefix (arr.size()+1, 0);

        for(int i=0;i<arr.size();i++){
            prefix[i+1]=prefix[i]^arr[i];
        }
        vector<int> res;
        for(auto q:queries){
            res.push_back(prefix[q[1]+1] ^ prefix[q[0]]);
        }
        return res;
        
    }
};