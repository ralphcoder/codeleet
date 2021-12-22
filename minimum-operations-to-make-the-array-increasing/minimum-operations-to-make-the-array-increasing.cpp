class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size()-1;i++)
           if(nums[i+1]<=nums[i])sum+=nums[i]-nums[i+1]+1,nums[i+1]=nums[i]+1;
        return sum;
    }
};