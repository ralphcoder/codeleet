class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        vector<string>a;
        string t="";int ans=0;
        for(char ch:s)
        {t+=ch;
        a.push_back(t);}
        for(string y:words)
        {
            if(y.size()<=s.size() && a[y.size()-1]==y)ans++;
     }
        return ans;
    }
};