class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged;
        for(int i = 0; i < m; i++) merged.push_back(nums1[i]);
        for(int i = 0; i < n; i++) merged.push_back(nums2[i]);
        
        sort(merged.begin(), merged.end());
        nums1 = merged;
    }
};