class Solution {
public:
    bool isPalindromic(string s){
        int size = s.size();
    
        for(int i = 0; i < size / 2; i++) 
            if(s[i] != s[size - i - 1]) return false;
        
        return true;
    }
    
    int removePalindromeSub(string s) {
        if(isPalindromic(s)) return 1;
        else return 2;
    }
};