class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int start=0,fre=0;
        for(auto i: nums)
        {   if(i<target)start++;
            if(i==target)fre++;}
            while(fre--)
                ans.push_back(start++);
            return ans;   
    }
};