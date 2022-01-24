class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>ans;int sum=0;
        int c=accumulate(nums.begin(),nums.end(),0);
        sort(nums.rbegin(),nums.rend());
        
        cout<<c;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];c-=nums[i];
            ans.push_back(nums[i]);
            if(sum>c)break;   
        }
        return ans;
    }
};