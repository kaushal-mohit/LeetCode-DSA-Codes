class Solution {
    void count(string s, unordered_map<string,int> &mp){
        string word="";
        for(auto x:s){
            if(x==' '){
                mp[word]++;
                word="";
            }
            else{
                word.push_back(x);
            }
        }
        mp[word]++;
    }

public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        unordered_map<string,int> mp;
        count(s1,mp);
        count(s2,mp);

        vector<string> res;

        for(auto x:mp){
            if(x.second==1) res.push_back(x.first);
        }

        return res;

    }
};