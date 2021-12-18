class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a=1000,b=0,ans=1;
        for(auto i: nums)
        {
            a=min(a, i);
            b= max(b,i);
        }
        for(int i=1;i<=a;i++)
        if(a%i==0 && b%i==0 && i>ans)ans=i;
        return ans;
    }
};