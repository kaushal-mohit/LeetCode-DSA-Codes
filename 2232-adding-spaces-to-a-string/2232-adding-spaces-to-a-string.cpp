class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int p1=0;
        for(int &idx:spaces){
            while(p1<idx){
                res+=s[p1++];
            }
            if(p1==idx){
                res+=' ';
            }
            // p1++;
        }
        while(p1<s.size()){
            res+=s[p1++];
        }
        return res;
    }
};