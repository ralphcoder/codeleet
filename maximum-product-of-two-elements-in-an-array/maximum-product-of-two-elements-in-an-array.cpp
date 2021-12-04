class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]>=a)
            {b=a;
            a=nums[i];continue;}
            if(nums[i]>b)
                b=nums[i];
        }
        cout<<a<<" "<<b;
        return ((a-1)*(b-1));
    }
};