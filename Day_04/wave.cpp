class Solution {
  public:
    // arr: input array
    // Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr) {
    
        // code here
        int n=arr.size();
        for(int i=1;i<n;i+=2){
           swap(arr[i],arr[i-1]);
            
        }
        
    }
};