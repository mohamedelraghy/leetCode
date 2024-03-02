class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqArr;
        for(auto i : nums) sqArr.push_back(i * i);
        sort(sqArr.begin(), sqArr.end());
        
        return sqArr;
    }
};