class Solution {
public:
    int scoreOfString(string s) {
        int size = s.size();
        int res = 0;
        for(int i = 1; i < size; i++) {
          res += abs(s[i - 1] - s[i]);
        }
        
        cout << abs(res) << endl;
        return abs(res);
    }
};