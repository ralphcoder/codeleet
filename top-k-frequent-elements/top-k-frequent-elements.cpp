typedef pair<int,int> p;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        priority_queue<p,vector<p>,greater<p>>maxh;
        vector <int>ans;
        for(int i:nums)
            a[i]++;
        for(auto i: a)
        { maxh.push({i.second,i.first});
         if(maxh.size()>k)maxh.pop();
         cout<<maxh.top().first<<" "<<maxh.top().second<<"\n";
        }
         
        while(maxh.size()!=0)
        { ans.push_back(maxh.top().second);
        maxh.pop();}
        return ans;
    }
};