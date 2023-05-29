class Solution {
public:
    string longestPalindrome(string s) {
      string longest, subs, subsrev;
      longest = subs = subsrev = "";

      int n = s.size();
      int j = 0;

      for(int i = 0; i < n; i++) {
        j = n - 1;
        while (i < j) {
          if(s[i] == s[j] && longest.size() < (j - i + 1)) {
            subs = s.substr(i, (j - i + 1));
            subsrev = subs;
            reverse(subsrev.begin(), subsrev.end());

            if(subs == subsrev) longest = subs;
          }
          j--;
        }
      }

      if(longest.size() == 0) longest = s[0];

      return longest;
    }
};