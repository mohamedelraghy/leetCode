class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0); 
       
        if(m * n != original.size()) return {};

        vector<vector<int>> res(m, vector<int>(n));
        for(int i =  0; i < m; i++) {
            res[i] = vector<int>(n);
            for(int j = 0; j < n; j ++) {
                res[i][j] = original[(n * i) + j];
            }
        }

        return res;
    }
};