class Solution {
    
    bool isVowel(char c) {
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
    }
    
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        vector<int> vowelsIndex;
        
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(isVowel(c)) {
                vowels.push_back(c);
                vowelsIndex.push_back(i);
            }            
        }
        
        int size = vowelsIndex.size();
        for(int i = 0; i < size; i++) {
            int index = vowelsIndex[size - 1 - i];
            s[index] = vowels[i];
        }
        
        return s ;
    }
};