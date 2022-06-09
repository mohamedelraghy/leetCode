class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> med;
        for(int i = 0; i < nums1.size(); i++) med.push_back(nums1[i]);
        for(int i = 0; i < nums2.size(); i++) med.push_back(nums2[i]);
        sort(med.begin(), med.end());
        
        int center = med.size() / 2;
        if(med.size() % 2 == 0) return (med[center - 1] + med[center]) / 2.0;
        else return med[center] / 1.0;
    }
};