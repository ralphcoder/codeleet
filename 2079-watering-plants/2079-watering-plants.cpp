class Solution {
public:
    int wateringPlants(vector<int>&a, int ca) {
        int ans=0,ca1=ca;
        for(int i=0;i<a.size();i++)
        {
            if(ca<a[i])
                ans+=(i)*2,ca=ca1;
            ca-=a[i];
            ans++;
        }
        return ans;
    }
};