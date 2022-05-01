class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>a;int ans=0;
        for(vector<int> i:points)
            a.push_back(i[0]);
        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++)
            ans=max(ans,a[i+1]-a[i]);
          return ans;  
    }
};