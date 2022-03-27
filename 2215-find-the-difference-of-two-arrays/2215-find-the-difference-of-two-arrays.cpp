class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
    unordered_set<int> s1(n1.begin(),n1.end()), s2(n2.begin(),n2.end());
        vector<vector<int>>ans(2);
        for(int i:s2)if(s1.count(i)==0)ans[1].push_back(i);
        for(int i:s1)if(s2.count(i)==0)ans[0].push_back(i);
        return ans;
    }
};