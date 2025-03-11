class Solution {
public:
    int numberOfSubstrings(string s) {
        int len=s.size();
        int left, right = 0;
        int count = 0;
        vector<int> freq(3,0);
        
        while(right<len){
            char c=s[right];
            freq[c-'a']++;

            while(helper(freq)){
                count+=len-right;
                char cur=s[left];
                freq[cur-'a']--;
                left++;
            }
            right++;
        }
        return count;
    }

    bool helper(vector<int> freq){
        return freq[0]> 0 && freq[1]>0 && freq[2]>0;
    }
};