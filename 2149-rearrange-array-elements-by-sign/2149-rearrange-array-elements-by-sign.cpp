class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posVec, negVec, res;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) posVec.push_back(nums[i]);
            else negVec.push_back(nums[i]);
        }
        
        for(int i =0; i < nums.size() / 2; i++) {
            res.push_back(posVec[i]);
            res.push_back(negVec[i]);
        }
        
        return res;
    }
};