class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maxs=arr[0];
        int current=arr[0];
        for(int i=1;i<arr.size();i++){
            current=max(arr[i],current+arr[i]);
            maxs=max(maxs,current);
        }
        return maxs;
    }
};