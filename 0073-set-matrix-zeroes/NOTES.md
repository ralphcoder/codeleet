```
class Solution {
public:
void setZeroes(vector<vector<int>>& matrix) {
vector<vector<int>>dub=matrix;
int n=dub.size();
int m=dub[0].size();
cout<<n<<" "<<m;
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
if(dub[i][j]==0)
{   for(int k=0;k<m;k++)matrix[i][k]=0;
for(int k=0;k<n;k++)matrix[k][j]=0;}
}
}
};
```