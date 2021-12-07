class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>minh;
        vector<int>ans;
        for(int i: nums)
            minh.push(i);
        while(minh.size()!=0)
        {  ans.push_back(minh.top());minh.pop();}
          return ans;
    }
};