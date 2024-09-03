class Solution {
public:
    int getLucky(string s, int k) {

        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

       int assciiValue = int('a') - 1;
       string convertedString = "";

       for(char i : s) {
        int strToInt = i - assciiValue;
        stringstream ss;
        ss << strToInt;
        convertedString += ss.str();
       }

        for(int i = 0; i < k; i++) {
            int sum = 0;
            for(char i : convertedString) {
                sum += i - '0';
            }
            stringstream ss;
            ss << sum;
            convertedString = ss.str();
        }
       
        return stoi(convertedString);
    }
};