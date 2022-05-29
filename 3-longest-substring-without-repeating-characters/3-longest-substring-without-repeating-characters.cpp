class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        map<char, int> seen;
        int max_len(0), start(0);
        
        for(int end = 0; end < s.size(); end++){
            if(seen.find(s[end]) != seen.end()) 
                start = max(start, seen[s[end]] + 1);
            
            seen[s[end]] = end;
            max_len = max(max_len, end - start + 1);
        }
        return max_len;
    }
};