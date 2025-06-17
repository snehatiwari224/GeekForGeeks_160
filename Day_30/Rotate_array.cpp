class Solution {
  public:

    void reverse(vector<int>&arr,int start,int end){
        while(start<end){
            swap(arr[start++],arr[end--]);
           
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        
       if(n==0) return;
       d=d%n;
       if(d==0) return;
        reverse(arr,0,d-1);
        
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
       
        
    }
};