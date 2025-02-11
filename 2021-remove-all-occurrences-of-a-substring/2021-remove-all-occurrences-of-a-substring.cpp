class Solution {
    bool helper(stack<char> &st, string &part, int partlen){
        stack<char> tmp=st;
        for(int idx=partlen-1; idx>=0;idx--){
            if(tmp.top()!=part[idx]){
                return false;
            }
            else{
                tmp.pop();
            }
        }
        return true;
    }
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;
        int strlen=s.size(), partlen=part.size();

        for(int i=0;i<strlen;i++){
            st.push(s[i]);
            if(st.size()>=partlen && helper(st,part,partlen)){
                for(int j=0;j<partlen;j++){
                    st.pop();
                }
            }
        }
        string res="";

        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};