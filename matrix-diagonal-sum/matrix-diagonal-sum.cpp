class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int si=mat[0].size();
        int sum=0;
        for(int i=0;i<mat[0].size();i++)
        sum+=mat[i][i];
        for(int i=0,j=si-1;i<si;i++,j--)
         if(i+j==si-1)sum+=mat[i][j];
        return si%2==0?sum:sum-mat[si/2][si/2];
    }
};