class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k,0);
        unordered_map<int, unordered_set<int>>a;
        for(auto i:logs)
            a[i[0]].insert(i[1]);
        for(auto i:a)
            ans[i.second.size()-1]++;
        
        return ans;
    }
};