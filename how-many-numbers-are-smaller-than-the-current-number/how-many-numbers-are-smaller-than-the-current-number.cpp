class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> v=nums;
        vector<int> ans;
        sort(v.begin(), v.end()); 
        for(int i:nums)
        {
        auto it = find(v.begin(), v.end(), i);
        int index = it - v.begin();
        ans.push_back(index);
         }
        return ans;
    }
};