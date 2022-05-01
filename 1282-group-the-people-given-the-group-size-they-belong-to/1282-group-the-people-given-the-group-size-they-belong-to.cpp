class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>>ans;
        vector<vector<int>>temp(g.size()+1); 
        vector<int>a;
        for(int i=0;i<g.size();i++)
            temp[g[i]].push_back(i);
        for(int i=0;i<temp.size();i++)
            for(int j=0;j<temp[i].size();j++)
            {  a.push_back(temp[i][j]);
                if((j+1)%(i)==0 && i)
                  ans.push_back(a),a.clear();
            }
        return ans;  
        
    }
};