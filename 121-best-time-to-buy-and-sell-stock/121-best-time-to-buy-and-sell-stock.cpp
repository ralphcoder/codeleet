class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0,h=INT_MAX;
        for(int i=0;i<p.size();i++)
        { h=min(h,p[i]);
        ans=max(ans,p[i]-h);}
        return ans;
    }
};