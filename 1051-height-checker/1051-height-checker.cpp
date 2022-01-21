class Solution {
public:
    int heightChecker(vector<int>& he) {
       int a[101]={0};int ans=0;
        for(int i:he)a[i]++;
        int t=0,i=0;
        while(t<he.size())
        {
            if(a[i]>0){if(he[t++]!=i)ans++;a[i]--;}
            else i++;
        }
        return ans;
    }
};