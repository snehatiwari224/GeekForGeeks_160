class Solution {
  public:
    
    bool isRotated(string& s1, string& s2) {
        // Your code here
         int n = s1.length();
        if (n != s2.length()) return false;
        if (n <= 2) return s1 == s2;

        string left = s1.substr(2) + s1.substr(0, 2);
        string right = s1.substr(n - 2) + s1.substr(0, n - 2);

        return (s2 == left || s2 == right);
        
    }
};
