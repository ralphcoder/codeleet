class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>out;
       for(int i=1;i<nums.size();i+=2)
       {  int n=nums[i-1];
           while(n--)
           {
               out.push_back(nums[i]);}
       }
        return out;
    }
};