class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int c=0;
       map<int, int>a;
        for(int i: nums)
        {
            if(a[k-i])a[k-i]--,c++;
            else a[i]++;
        }
        return c;
        
    }
};