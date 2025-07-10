class Solution {
  public:
    int countOnes(vector<int>& arr) {
        // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==1){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return low;
        
     
    }
};
