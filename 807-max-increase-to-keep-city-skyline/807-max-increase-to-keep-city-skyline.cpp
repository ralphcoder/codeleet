class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
       int n=grid.size(),sum=0;
       vector<int> cmax(n, 0), rmax(n, 0);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {    if(grid[i][j]>rmax[i])rmax[i]=grid[i][j];
                 if(grid[i][j]>cmax[j])cmax[j]=grid[i][j];}
       for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                sum+=min(rmax[i],cmax[j])-grid[i][j];
         return sum;
    }
};