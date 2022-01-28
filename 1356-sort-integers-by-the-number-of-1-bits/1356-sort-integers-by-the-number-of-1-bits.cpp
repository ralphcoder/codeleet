class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
       priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > mi;
        for(int i: arr)mi.push({__builtin_popcount(i),i});
        while(mi.size()!=0)
        {
            ans.push_back(mi.top().second);mi.pop();
        }
        cout<<__builtin_popcount(2);
        return ans;
    }
};