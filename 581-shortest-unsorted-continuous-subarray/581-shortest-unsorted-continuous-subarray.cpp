class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>dub=nums;
         sort(nums.begin(),nums.end());
        int f=0,b=0;
        
        for(int i=0,j=nums.size()-1;j>=0;i++,j--)
        {
          if(dub[i]!=nums[i])b=i+1;
            if(dub[j]!=nums[j])f=j;
    }
        cout<<"front-"<<f<<"back-"<<b;
        return b-f;
    }
};