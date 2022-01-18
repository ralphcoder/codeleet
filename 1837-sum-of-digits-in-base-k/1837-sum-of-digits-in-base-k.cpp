class Solution {
public:
    int sumBase(int n, int k) {
        int s=0;
        while(n!=0)
        {
            int r=n%k;
            s+=r;
            n=n/k;
        }
        return s;
    }
};