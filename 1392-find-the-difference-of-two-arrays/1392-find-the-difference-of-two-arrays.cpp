class Solution {
  vector<int> findDistinct(vector<int>& nums1, vector<int>& nums2) {
    set<int> ans;
    for(int i = 0; i < nums1.size(); i++) {
      bool flag = true;
      for(int j = 0; j < nums2.size(); j++) {
        if(nums1[i] == nums2[j]){
          flag = false;
          break;
        }
      }
      if(flag) ans.insert(nums1[i]);
    }
    vector<int> Vans;
    Vans.assign(ans.begin(), ans.end());
    return Vans;
  }

public:
    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      return {
        findDistinct(nums1, nums2), 
        findDistinct(nums2, nums1)
      };
    }
};