class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& r, vector<int>& c) {
        int m=r.size(),n=c.size();
        vector<vector<int>> mat(m, vector<int>(n, 0));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
              mat[i][j]=min(r[i],c[j]);
                r[i]-=mat[i][j];
                c[j]-=mat[i][j];
            }
        return mat;
    }
};