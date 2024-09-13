class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto i: queries) {
           int xorRes = arr[i[0]];
           for(int j = i[0]; j < i[1]; j++) {
            xorRes ^= arr[j + 1];
           }
           ans.push_back(xorRes);
        }

        return ans;
    }
};