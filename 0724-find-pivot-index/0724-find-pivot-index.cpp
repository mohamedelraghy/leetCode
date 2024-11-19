class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumR = 0, sumL = 0;
        int size = nums.size();
        for(int i = 1; i < size; i++) sumR += nums[i];

        if(sumR == sumL) return 0;

        for(int i = 1; i < size; i++) {
            sumL += nums[i - 1];
            sumR -= nums[i];
            if(sumR == sumL) return i;
        }

        return -1;
    }
};