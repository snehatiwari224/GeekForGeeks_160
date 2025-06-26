class Solution {
  public:
    vector<int> pattern(int N) {
      vector<int>result;
      generatePattern(N,result,true,N);
      return result;
    }
  private:
    void generatePattern(int current,vector<int>&result,bool isDec,int original){
        result.push_back(current);
        if(current<=0){
            isDec=false;
        }
        if(current == original && !isDec){
            return;
        }
        if(isDec){
            generatePattern(current-5,result,true,original);
            
        }
        else{
            generatePattern(current+5,result,false,original);
        }
    }
};
Input: n = 16
Output: 16 11 6 1 -4 1 6 11 16
Explanation: The value decreases until it is greater than 0. After that it increases and stops when it becomes 16 again.