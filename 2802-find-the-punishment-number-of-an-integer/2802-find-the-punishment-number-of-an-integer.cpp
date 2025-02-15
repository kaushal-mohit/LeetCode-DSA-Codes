class Solution {
    bool check(string s, int target){
        //base
        if(s=="" && target == 0) return true;
        if(target < 0) return false;

        bool ans = false;
        for(int i = 0; i < s.size(); i++){
            string left = s.substr(0,i+1);
            string right = s.substr(i+1);
            int leftNum = stoi(left);
        
            if(check(right, target - leftNum)){
                ans = true;
                break;
            }
        }
        return ans;
    }
public:
    int punishmentNumber(int n) {
        int res=0;
        for(int i=1;i <= n; i++){
            int sq=(i*i);
            
            if(check(to_string(sq), i)){
                res+=sq;
            }
        }
        return res;
    }
};