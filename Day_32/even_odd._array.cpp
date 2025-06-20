class Solution {
  public:
  
    int maxEvenOdd(int arr[], int n) {
        // Your code here
        int maxLen=1;
        int count=1;
        for(int i=1;i<n;i++){
            if((arr[i] %2) !=(arr[i-1]%2)){
                count++;
                maxLen=max(maxLen,count);
                
            }
            else{
                count=1;
            }
        }
        return maxLen;
        
    }
};