class Solution {
public:
    int subsetXORSum(vector<int>& nums,int sum=0) {
        for(int n:nums)
            sum|=n;
        return sum*pow(2,nums.size()-1);
    }
};