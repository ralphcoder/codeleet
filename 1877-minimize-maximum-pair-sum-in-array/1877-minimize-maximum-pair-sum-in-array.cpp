class Solution {
public:
    int minPairSum(vector<int>& nums) {
       int ma=0,i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while (i<j){
            ma=max(ma,nums[i]+nums[j]);
            i++;j--;
        }
        return ma;
    }
};