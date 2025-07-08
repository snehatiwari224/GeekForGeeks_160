class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        int count=0,candidate=-1;
        for(int i=0;i<n;i++){
            if(count==0){
                candidate=arr[i];
                count=1;
                
            }
            else if(arr[i]==candidate){
                count++;
                
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
           if(arr[i]==candidate){
               count++;
           }
        }
        if(count>n/2){
            return candidate;
        }
        else{
            return -1;
        }
        
    }
};