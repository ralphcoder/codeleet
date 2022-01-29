class Solution {
public:
    int projectionArea(vector<vector<int>>& g,int a=0,int sum=0) {
        for(int i=0;i<g[0].size();i++){
             a=0;
            for(int j=0;j<g.size();j++)
            { a=max(g[j][i],a);sum+=g[j][i]!=0?1:0;}
           sum+=a;
        }
        for(int i=0;i<g.size();i++){
            a=0;
        for(int j=0;j<g[0].size();j++)
        a=max(g[i][j],a);
        sum+=a;}
        return sum;
    }
};