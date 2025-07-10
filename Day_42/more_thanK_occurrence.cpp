class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        int count=0;
        int i=0;
        while(i<n){
            int freq=1;
            
            while(i+1<n && arr[i]==arr[i+1]){
                freq++;
                i++;
            }
            if(freq>n/k){
                count++;
            }
            i++;
        }
        return count;
        
    }
};