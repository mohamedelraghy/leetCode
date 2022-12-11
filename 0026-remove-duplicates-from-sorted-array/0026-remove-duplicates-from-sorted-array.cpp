class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueNums;
        for(auto i : nums) uniqueNums.insert(i);
        
        int j =  0;
        for(auto i : uniqueNums) nums[j++] = i;
        
        return uniqueNums.size();
    }
};