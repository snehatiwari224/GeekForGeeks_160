class Solution {
  public:

    int betBalance(string result) {
        // code here
        int balance=4;
        int bet=1;
        for(char c : result){
            if(balance<bet){
                return -1;
            }
            if(c=='W'){
                balance+=bet;
                bet=1;
            }
            else if(c=='L'){
                balance-=bet;
                bet*=2;
            }
        }
        return balance;
    }
};