class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(size, 0);
        int posIndex = 0, negIndex = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                res[posIndex] = nums[i];
                posIndex += 2;
            } else {
                res[negIndex] = nums[i];
                negIndex += 2;
            }
        }
        
        return res;
    }
};