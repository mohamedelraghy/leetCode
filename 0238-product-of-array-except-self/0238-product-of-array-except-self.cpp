class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     
        
        int size = nums.size();
        vector<int> res(size, 1);
        
        int prefix = 1;
        for(int i = 0; i < size; i++) {
            res[i] = prefix;
            prefix *= nums[i];
        }
        
        for(auto i : res) cout << i << " ";
        
        int postfix = 1;
        for(int i = size - 1; i >= 0; i--) {
            res[i] = postfix * res[i];
            postfix *= nums[i];
        }
        
        
        return res;
    }
};