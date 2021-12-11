class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int h) {
        priority_queue<int>maxh;
        int l=matrix.size();
        for(int i=0;i<l;i++){
        for(int k=0;k<l;k++)
        { 
            maxh.push(matrix[i][k]);
              cout<<maxh.top()<<" ";
            if(maxh.size()>h)maxh.pop();
              
        }}
     return maxh.top();;
    }
};