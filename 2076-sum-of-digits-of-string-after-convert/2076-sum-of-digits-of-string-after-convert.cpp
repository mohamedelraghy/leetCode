class Solution {
public:
    int getLucky(string s, int k) {

        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        // Optimized conversion of characters to numbers
        string convertedString = "";
        for (char i : s) {
            int strToInt =
                i - 'a' + 1; // Direct calculation without extra variables
            convertedString +=
                to_string(strToInt); // Use 'to_string' instead of stringstream
        }

        // Perform the transformation 'k' times
        for (int i = 0; i < k; i++) {
            int sum = 0;
            for (char c : convertedString) {
                sum += c - '0'; // Convert character digit to integer
            }
            convertedString = to_string(sum); // Convert the sum back to string
        }

        return stoi(convertedString);
    }
};