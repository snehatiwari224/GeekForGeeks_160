
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        vector<int> freq(26, 0);
        
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        
        for (char ch : s) {
            if (freq[ch - 'a'] == 1)
                return ch;
        }
        
        return '$';
        
    }
};