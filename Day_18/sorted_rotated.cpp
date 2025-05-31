
class Solution {
  public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    // Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num) {

  
        int inc=0,dec=0;
        for(int i=0;i<num;i++){
            int next=(i+1)%num;
            
            if(arr[i]>arr[next]){
                inc++;
            }
            if(arr[i]<arr[next]){
                dec++;
            }
        }
        return (inc == 1|| dec==1);
        
        
        
    }
};