class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int size=pref.size();

        for(auto &x:words){
            if(x.substr(0,size)==pref)cnt++;
        }
        return cnt;
    }
};