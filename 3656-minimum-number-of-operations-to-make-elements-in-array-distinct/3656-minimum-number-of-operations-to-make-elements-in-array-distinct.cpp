class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int length = nums.size();
        unordered_map<int,int> freq;
        int idx=0;

        for(int i=length-1; i>=0;i--){
            // cout<<i<<" "<<nums[i]<<endl;
            if(freq.find(nums[i])!=freq.end()){
                // cout<<i<<endl;
                idx=i+1;
                break;
            }
            freq[nums[i]]++;
        }
        return ceil((double)idx/3);
    }
};