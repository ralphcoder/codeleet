class Solution {
public:
    int maxCoins(vector<int>& p) {
        int ans=0;
        int n=p.size();
        sort(begin(p),end(p));
        for(int i=n-2;i>=(n/3);i-=2)
        ans+=p[i];
        return ans;
    }
};