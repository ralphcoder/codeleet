class Solution {
public:
    int numberOfMatches(int n) {
        int s=0;
        while(n!=1)
        {
            s+=(n%2==0?n/2:(n-1)/2);
            n=(n%2==0?n/2:(n-1)/2+1);
        }
        return s;
    }
};