class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int equalVal = 0;

        for(int i = 0; i < size; i++) {
            if(nums[i] == val) {nums[i] = 1000;
            equalVal++;}
        }

    

        int notEqualVal = size - equalVal;
        sort(nums.begin(), nums.end());
        return notEqualVal;
    }
};