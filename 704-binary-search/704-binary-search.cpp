class Solution {
public:
    int search(vector<int>& nums, int target) {
       int  mid=0;int a=0;int b=nums.size()-1;
           while(a<=b)
           {
             mid=a+(b-a)/2;
               if(target== nums[mid])return mid;
               if(target>nums[mid]) a=mid+1;
               if(target<nums[mid]) b=mid-1;
           }    
        return -1;    }
};