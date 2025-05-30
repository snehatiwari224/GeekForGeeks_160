class Solution {
  public:
    int LargButMinFreq(int arr[], int n) {
        // code here
       unordered_map<int,int>freq;
       
        for(int i=0;i<n;i++){
          freq[arr[i]]++;
        }
        int minfreq=INT_MAX;
        for(auto it:freq){
            minfreq=min(minfreq,it.second);
        }
        int ans=INT_MIN;
        for(auto it:freq){
            if(it.second==minfreq){
                ans=max(ans,it.first);
            }
        }
           return ans;
        }
        
        
};
