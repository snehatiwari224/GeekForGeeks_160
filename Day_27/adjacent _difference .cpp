
class Solution {
  public:
   
    int minAdjDiff(int arr[], int n) {
        // Your code here
        int mindiff=INT_MAX;
        for(int i=0;i<n;i++){
            int diff=abs(arr[i]-arr[(i+1)%n]);
            mindiff=min(mindiff,diff);
        }
        return mindiff;
    }
};