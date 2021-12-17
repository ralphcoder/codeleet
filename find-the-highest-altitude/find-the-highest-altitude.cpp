class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,tamp=0;
        for(auto i:gain)
        {   tamp=tamp+i;
            if(tamp>ans)
                ans=tamp;
        }
        return ans;
    }
};