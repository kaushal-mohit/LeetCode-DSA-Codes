class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();

        int i=0,j=0;

        while(i<n&&j<m){
            if(str1[i]==str2[j]){
                i++;
                j++;
                continue;
            }
            else{
                char nxt=((str1[i]-'a')+1)%26+'a';
                if(nxt==str2[j]){
                    j++;
                }
                i++;
            }
        }
        return j==m;
    }
};