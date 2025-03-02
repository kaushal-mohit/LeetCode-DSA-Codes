class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int len1=nums1.size(), len2=nums2.size();
        int i=0,j=0;
        vector<vector<int>> res;
        while(i<len1 && j<len2){
            if(nums1[i][0]==nums2[j][0]){
                res.push_back({nums1[i][0],nums1[i++][1]+nums2[j++][1]});
            }
            else if(nums1[i][0]<nums2[j][0]) res.push_back({nums1[i][0],nums1[i++][1]});
            else if(nums1[i][0]>nums2[j][0]) res.push_back({nums2[j][0],nums2[j++][1]});

        } 
        while(i<len1) res.push_back({nums1[i][0],nums1[i++][1]});
        while(j<len2) res.push_back({nums2[j][0],nums2[j++][1]});
        return res;
        
    }
};