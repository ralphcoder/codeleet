class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int c=0;
        for(int i=0;i< nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(auto i: map)
        {
            if(i.second>1)
                for(int j=i.second-1;j>0;j--)
                c+=j;    
        }
        return c;
    }
};