class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> maxh;
        for(int i=0;i<mat.size();i++)
        { int j=0;
            for( j=0;j<mat[0].size();j++)
                if(mat[i][j]==0)
                    break ;
            cout<<j<<" ";
            maxh.push({j,i});
            if(maxh.size()>k)maxh.pop();
        }
        vector<int>v(k,0);
        for(int i=k-1;maxh.size()>0;i--)
        {v[i]=maxh.top().second;
         maxh.pop();}
        return v;
    }
    
};