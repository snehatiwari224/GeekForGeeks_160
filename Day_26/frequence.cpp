class Solution {
  public:
    
    vector<int> frequencyCount(vector<int>& arr) {
        
        int n=arr.size();
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            if(arr[i]>=1 && arr[i]<=n){
                result[arr[i]-1]++;
            }
        }
         return result; 
        
    }
};
