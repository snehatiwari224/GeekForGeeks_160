class Solution {
  public:
    
  
    string longestCommonPrefix(vector<string> arr) {
    if (arr.empty()) return "";

    sort(arr.begin(), arr.end());

    string first = arr[0];
    string last = arr[arr.size() - 1];
    string result = "";

    for (int i = 0; i < first.length(); i++) {
        if (first[i] == last[i]) {
            result += first[i];  
        } else {
            break; 
        }
    }

    return result;
       
    }
};