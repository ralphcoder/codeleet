class Solution {
public:
    string removeDuplicates(string s) {
        string ans=string()+s[0];
        cout<<ans;
        for(int i=1;i<s.size();i++)
            if(s[i]!=ans.back())ans+=s[i];
            else
               ans.erase(ans.size()-1);
        return ans;
    }
};