class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string,int> mp;
        set<string> st(bannedWords.begin(), bannedWords.end());

        for(auto &x:message){
            mp[x]++;
        }
        
        int cnt=0;
        for(auto &x:st){
            if(mp.find(x)!=mp.end()){
                cnt+=mp[x];
            }
        }

        return cnt>=2;
    }
};