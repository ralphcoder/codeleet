class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> a;
       int pos=k%nums.size();
       for(int i=nums.size()-pos;i<nums.size();i++)
           a.push_back(nums[i]);
        for(int i=0;i<nums.size()-pos;i++)
            a.push_back(nums[i]);
        nums.erase(nums.begin(),nums.end());
        nums.insert(nums.begin(),a.begin(),a.end());
    }
};