class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        int c=0,temp=0,ans=0;
        for(int i=0;i<s.size();i++){
            c=0;temp=0;
            for (int j=i;j<s.size();j++)
            temp+=++c*s[j];
            ans=max(ans,temp);
        }
        return ans;
    }
};