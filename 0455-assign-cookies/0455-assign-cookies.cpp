class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int cnt=0, p1=0, p2=0;

        while(p1<g.size() && p2<s.size()){
            if(s[p2]>=g[p1]){
                cnt++;
                p1++;
                p2++;
            }
            else{
                p2++;
            }
        }
        return cnt;
    }
};