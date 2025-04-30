class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;

        for(auto &x:nums){
            if(to_string(x).size()%2==0) cnt++;
        }
        return cnt;
    }
};