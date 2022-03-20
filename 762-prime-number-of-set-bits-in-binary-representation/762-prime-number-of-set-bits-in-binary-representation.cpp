class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        map <int, int> prim {
            {2,1},{3,1},{5,1},{7,1},{11,1},{13,1},{17,1},{19,1},{23,1},{31,1}
        };
        int c=0;
        for(int i=left;i<=right;i++)if(prim[__builtin_popcount(i)])c++;
        return c;
    }
};