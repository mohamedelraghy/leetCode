class Solution {

    string shortestRoot(string word, unordered_set<string> dictSet) {
        // Find The shortest root of the word in the dictionary
        for(int i = 1; i <= word.size(); i++) {
            string root = word.substr(0, i);
            if(dictSet.contains(root)) {
                return root;
            }
        }
        // There is not a corresponding root in the dictionary
        return word;
    }
    
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        istringstream sStream(sentence);
        unordered_set<string> dictSet(dictionary.begin(), dictionary.end());
        
        //  Replace each word in sentence with the corresponidng shortest root
        string word;
        string newSentence;
        while(getline(sStream, word, ' ')) {
            newSentence += shortestRoot(word, dictSet) + " ";
        }
        
        newSentence.pop_back();
        return newSentence;
    }
};