class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> res;
        int idx=0;
        for(auto v:variables){
            int a=v[0], b=v[1], c=v[2], d=v[3];
            int n1=1;
            for(int i=0;i<b;i++){
                n1=(n1*a)%10;
            }
            int n2=1;
            for(int i=0;i<c;i++){
                n2=(n2*n1)%d;
            }
            if(n2 == target) res.push_back(idx);
            idx++;
        }
        return res;
    }
};