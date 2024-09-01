class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res(m);
        if(m * n != original.size()) return {};

        for(int i =  0; i < m; i++) {
            res[i] = vector<int>(n);
            for(int j = 0; j < n; j ++) {
                res[i][j] = original[(n * i) + j];
            }
        }

        return res;
    }
};