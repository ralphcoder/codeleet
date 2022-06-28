class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())
            return {};
        int i=0;
        int s=nums.size();
    int a[s+1];
        for(i=0;i<s+1;i++){a[i]=0;}
       for(i=0;i<s;i++){
            a[nums[i]]++;  
        }
        nums.clear();
      for(i=0;i<s+1;i++){
            if (a[i]==2)
              nums.push_back(i);  
        }
        return nums;
    }
};