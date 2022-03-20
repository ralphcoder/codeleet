class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int c=0;
        for(int i=0;i<nums.size();i++)
        {    sum-=nums[i];
            if(sum==c)return i;
            c+=nums[i];
        }
        return -1;
    }
};