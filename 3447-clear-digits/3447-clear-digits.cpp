class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(auto i: s){
            if(i>='a' && i<='z'){
                st.push(i);
            }
            else{
                st.pop();
            }
        }
        string res;
        while(!st.empty()){
            char tmp=st.top();
            st.pop();
            res+=tmp;
        }
        reverse(res.begin(), res.end());
        return res; 
    }
};