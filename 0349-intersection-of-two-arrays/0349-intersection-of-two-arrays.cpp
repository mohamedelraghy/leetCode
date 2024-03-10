class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> unique;
        
        for(int num1: nums1){
            for(int num2: nums2) {
                if(num1 == num2) {
                    unique.insert(num1);
                    continue;
                }
            }
        }
        vector<int> vec(unique.begin(), unique.end());
        return vec;
    }
};