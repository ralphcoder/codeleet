class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truck) {
        priority_queue<pair<int,int>>a;int ans=0;
        for(auto i:box) a.push({i[1],i[0]});
        while(a.size()!=0){
            int size=a.top().second;
           if( size<truck){ans+=size*a.top().first;truck-=size;}
            else {ans+=truck*a.top().first;break;}
            a.pop();
        }
        return ans;
        }
};