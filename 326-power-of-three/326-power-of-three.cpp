class Solution {
public:
    bool isPowerOfThree(int n) {
     if(!n)return 0;
        while(n%3==0)n/=3;
        return n==1;
    }
};
/* 
Recurcive approach
  bool isPowerOfThree(int n) {
        if(!n)return 0;
        if(n==1)return 1;
        return n%3==0 & isPowerOfThree(n/3);
    }
    */