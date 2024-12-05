class Solution {
public:
    
    bool canChange(string start, string target) {
        int idx1=0,idx2=0;
        int n=start.size();

        while(idx1<n || idx2<n){
            while(idx1<n && start[idx1]=='_') idx1++;
            while(idx2<n && target[idx2]=='_') idx2++;
            
            if(start[idx1] != target[idx2]) return false;
            if(start[idx1]=='L' && idx1<idx2) return false;
            if(start[idx1]=='R' && idx1>idx2) return false;
            idx1++;
            idx2++;
        }
        return true;
        
    }
};