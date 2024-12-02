class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int p1=0, p2=0;
        int len1=sentence.size(), len2=searchWord.size();
        int curword=1;
        while(p1<=len1-len2){
            if(sentence.substr(p1,len2)==searchWord){
                return curword;
            }

            while(p1<len1-len2 && sentence[p1]!=' '){
                // curword++;
                p1++;
            }
            curword++;
            // cout<<curword<<endl;            
            p1++;
        }
        return -1;
    }
};