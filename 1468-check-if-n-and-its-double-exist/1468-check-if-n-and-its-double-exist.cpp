class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
        for(auto i:arr){
            // cout<<i<<endl;
            if(st.find(2*i)!=st.end() || ((i%2==0) && st.find(i/2)!=st.end())) return true;
            st.insert(i);
        } 
        return false;
    }
};