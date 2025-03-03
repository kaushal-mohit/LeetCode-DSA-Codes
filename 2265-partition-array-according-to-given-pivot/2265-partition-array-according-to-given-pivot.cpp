class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> before, after, same;

        for(int &x:nums){
            if(x<pivot)before.push_back(x);
            else if(x>pivot)after.push_back(x);
            else same.push_back(x);
        }

        vector<int> ans(before.begin(), before.end());
        ans.insert(ans.end(), same.begin(), same.end());
        ans.insert(ans.end(), after.begin(), after.end());
        return ans;
         
    }
};