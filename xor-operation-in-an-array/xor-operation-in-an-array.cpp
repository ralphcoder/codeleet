class Solution {
public:
    int xorOperation(int n, int start) {
        int sol=0;
        for(int i=0;i<n;i++)
            sol=sol^(start+2*i);
    
        return sol;
    }
    
};