class Solution {
  public:
    // Function to find two elements such that their sum is equal to the given number
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int repeating=-1,missing=-1;
       for (int i = 1; i <= n; i++) {
         if (freq[i] == 2) repeating = i;
         if (freq[i] == 0) missing = i;
    }
        return {repeating,missing};
    
    }
};