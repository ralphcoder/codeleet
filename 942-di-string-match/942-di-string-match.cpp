class Solution {
public:
    vector<int> diStringMatch(string s) {
      vector<int> a;int c=-1;int t=s.size()+1;
        for(auto i:s)
        {
            if(i=='I')a.push_back(++c);
                else a.push_back(--t);
        }
        if(s[s.size()-1]=='I')a.push_back(a.back()+1);
          else a.push_back(a.back()-1);
        return a;
    }
};