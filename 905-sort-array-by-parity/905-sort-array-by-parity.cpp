class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums,int t=0) {
        vector <int>e;vector<int>o;
        for(int i=0;i<nums.size();i++)
          nums[i]%2==0?e.push_back(nums[i]):o.push_back(nums[i]);
        o.insert(o.begin(),e.begin(),e.end());
        return o;
    }
};