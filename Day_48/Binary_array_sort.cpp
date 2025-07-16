class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        int i=0;int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cnt++;
            }
        }
        for(int i=0;i<n;i++){
          if(cnt>0){
              arr[i]=0;
              cnt--;
          }
          else {
              arr[i]=1;
          }
        }
        
    }
};
