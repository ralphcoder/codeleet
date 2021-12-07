class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
      int i, j, n = matrix.size(), m = matrix[0].size();
        priority_queue< int, vector<int>, greater<int>>minh;
        
        for(i = 0; i < n; i++)
        {
            for(j = 1; j < m; j++)
            {
                matrix[i][j] = matrix[i][j-1] ^ matrix[i][j];
            }
        }
        
        for(i = 0; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                matrix[j][i] = matrix[j-1][i] ^ matrix[j][i];
            }
        }
        
       for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
               
           minh.push(matrix[i][j]);
            if(minh.size()>k)minh.pop();}
        }
        return minh.top();
    }
};