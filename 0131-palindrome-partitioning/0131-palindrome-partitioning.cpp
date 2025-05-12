class Solution {

    void solve(int idx, string &s, vector<vector<string>> &res, vector<string> &path){
        if(idx==s.size()){
            res.push_back(path);
            return;
        }

        for(int i=idx; i<s.size(); i++){
            if(isPalindrome(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));
                solve(i+1, s, res, path);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int left, int right){
        while(left<=right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        solve(0,s,res,path);
        return res; 

    }
};