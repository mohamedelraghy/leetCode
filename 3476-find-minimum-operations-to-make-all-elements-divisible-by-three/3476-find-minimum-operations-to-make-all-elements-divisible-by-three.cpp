class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++ ) {
            if(nums[i] % 3 != 0) res++;
        }
        
        return res;
    }
};