class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<string> ans;
        while(i<n){
            int first=nums[i];
            int j=i+1;
            while(j<n and nums[j]==nums[i]+1){
                j++;
                i++;
            }
            if(first==nums[i]){
                ans.push_back(to_string(nums[i]));
            }
            else{
                ans.push_back(to_string(first)+"->"+to_string(nums[i]));
            }
            i++;
        }
        return ans;
    }
};