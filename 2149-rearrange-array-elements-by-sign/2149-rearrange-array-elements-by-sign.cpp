class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0,n=1;
        vector<int>ans(nums.size(),0);
        for(int i:nums)
        {
            if(i>=0)ans[p]=i,p+=2;
            else ans[n]=i,n+=2;
        }
        return ans;
    }
};