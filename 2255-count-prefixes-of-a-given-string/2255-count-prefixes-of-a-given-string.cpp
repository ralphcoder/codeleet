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
            if(y.size()<=s.size() && a[y.size()-1]==y)ans++;//hence proved if we order a value grater than vector size it gives runtime exception (rather than handling it)
     }
        return ans;
    }
};
/*
    int countPrefixes(vector<string>& words, string s) {
        int res = 0;
        for (auto& w : words)
            res += s.find(w) < 1;
        return res; 
    }
    */