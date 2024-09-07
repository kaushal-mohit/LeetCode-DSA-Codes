class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        long long total=0;
        for(auto &x:chalk){
            total+=x;
        }
        k%=total;
        int idx=0;
        while(k>0){
            if(chalk[idx]>k){
                break;
            }
            k-=chalk[idx++];
        }
        return idx;
    }
};