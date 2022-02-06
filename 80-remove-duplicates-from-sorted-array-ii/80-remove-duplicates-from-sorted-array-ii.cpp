class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=nums[0];int t=0,k=0;
        for(int i=0;i<nums.size();)
        {
             if(nums[i]!=c){c=nums[i],t=0;}
            t++;
            cout<<nums[i]<<" "<<t<<" -- ";
            if(t>2 && nums[i]==c)nums.erase(nums.begin()+i);
             else k++,i++;
           
        }
        
        return k;
    }
};