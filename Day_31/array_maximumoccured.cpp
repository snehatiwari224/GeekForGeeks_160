class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        vector<int>freq(maxx+2,0);
        
        for(int i=0;i<n;i++){
            freq[l[i]]+=1;
            freq[r[i]+1]-=1;
        }
        int maxFreq=freq[0];
        int res=0;
        for(int i=1;i<=maxx;i++){
            freq[i]+=freq[i-1];
            if(freq[i]>maxFreq)
            {
                maxFreq=freq[i];
                res=i;
            }
        }
        
        return res;
        
    }
};