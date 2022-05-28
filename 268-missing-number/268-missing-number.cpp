class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int i=0;
         int num=nums.size();
        for(int number:nums)
        {
            num^=number^i;
            i++;
        }
        return num;
    }
};