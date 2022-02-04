class Solution {
public:
    int islandPerimeter(vector<vector<int>>& g) {
       int ans=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1)
                { int c=4;
                    if(i-1>=0 && g[i-1][j])c--;
                    if(j-1>=0 && g[i][j-1])c--;
                    if(i+1<g.size() && g[i+1][j])c--;
                    if(j+1<g[0].size() && g[i][j+1])c--;
                 ans+=c;
                }
            }
        }
        return ans;
    }
};