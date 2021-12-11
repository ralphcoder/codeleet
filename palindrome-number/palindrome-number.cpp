class Solution {
public:
    bool isPalindrome(int x) {
        int x1=x;unsigned  long int s=0;
       while(x!=0)
       {
           s=s*10+(x%10);
           x=x/10;
       }
          if(s==x1 && x1>=0)
              return true;
        return false;
    }
};