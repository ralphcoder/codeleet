class Solution {
public:
    
    static bool mycomp(pair<int,int> p,pair<int,int> q)
    {
        return p.first> q.first;
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        vector<pair<int,int>> diff;
        for(int i=0;i<costs.size();i++)
            diff.push_back(make_pair(costs[i][1]-costs[i][0],i));
            
        sort(diff.begin(),diff.end(),mycomp);

        
        int ans=0;
        for(int i=0;i<costs.size();i++)
        {
            if(i<costs.size()/2)
            {
                ans+=costs[diff[i].second][0];
            }
            else
            {
                ans+=costs[diff[i].second][1];
            }
        }
        
        return ans;
        
    }
};