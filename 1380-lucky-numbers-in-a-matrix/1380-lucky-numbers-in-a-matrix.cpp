class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        vector<int>r(mat.size(),INT_MAX);
        vector<int>c(mat[0].size(),0);
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++){
                r[i]=min(r[i],mat[i][j]);
                c[j]=max(c[j],mat[i][j]);
            }
        vector<int>res;
        unordered_set<int>s(begin(r),end(r));
        for(auto i:c)
            if(s.count(i))return {i};
        return res;
    }
};