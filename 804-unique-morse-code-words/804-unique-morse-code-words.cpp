class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                                "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
                                "...-",".--","-..-","-.--","--.."};
        
        set<string> unique;
        for(int i = 0; i < words.size(); i++){
            string res = "";
            for(int j = 0; j < words[i].size(); j++){
                res += morse[words[i][j] - 'a'];
            }
            unique.insert(res);
        }
        
        return unique.size();
    }
};