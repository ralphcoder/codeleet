class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans(nums.size(),100);
        int a=0,j=1;
        for(auto i:nums){
            if(i&1)ans[j]=i,j+=2;
            else ans[a]=i,a+=2;
        }
        return ans;
    }
};