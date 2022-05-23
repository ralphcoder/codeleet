class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int,int>a;int c=0;
        for(int i=0;i<s.size();i++)
        {
            a[s[i]]++;
            a[t[i]]--;
        }
        for(auto i: a) if(i.second>0) c+=i.second;
        return c;
    }
};