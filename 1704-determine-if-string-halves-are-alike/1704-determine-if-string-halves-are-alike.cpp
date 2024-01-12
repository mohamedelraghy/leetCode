class Solution {
public:
    
    int countVowels(string s) {
      int count = 0, size = s.size();
      
      for(int i = 0; i < size; i++) {
        if(isVowel(tolower( s[i]))) count++;
      }
        return count;
    }
  
  bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u') return true;
    return false;
  }
    
    bool halvesAreAlike(string s) {
       string a = "", b = "";
      for(int i = 0, j = s.size() / 2; i < s.size() / 2; i++, j++) {
        a += s[i], b += s[j];
      } 

      if(countVowels(a) == countVowels(b)) return true;
      return false;
     }
};