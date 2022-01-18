class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       map <int,int>a;
       int s=0;
        for(auto i:nums)
        {
            a[i]++;
            if(a[i]==1)s+=i;
            if(a[i]==2)s-=i;
        }
        return s;
    }
};