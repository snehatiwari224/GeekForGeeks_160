class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        vector<string> words;
        string word = "", result = "";
        
        for (char c : s) {
            if (c != ' ') {
                word += c;
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        
        if (!word.empty()) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1) {
                result += ' ';
            }
        }

        return result;
        
    }
};