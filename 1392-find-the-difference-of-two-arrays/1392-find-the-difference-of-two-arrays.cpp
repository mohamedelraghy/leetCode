class Solution {
  vector<int> findDistinct(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> Nums1;
    unordered_set<int> Nums2;

    for(int num: nums2) Nums2.insert(num);

    for(int num: nums1) {
      if(Nums2.find(num) == Nums2.end()) {
        Nums1.insert(num);
      }
    }
    
    return vector<int> (Nums1.begin(), Nums1.end());
  }

public:
    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      return {
        findDistinct(nums1, nums2), 
        findDistinct(nums2, nums1)
      };
    }
};