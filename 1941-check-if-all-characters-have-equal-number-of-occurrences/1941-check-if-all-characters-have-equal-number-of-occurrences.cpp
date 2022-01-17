class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int>a;
            for(auto i:s)a[i]++;
        int t=a[s[0]];
        for(auto i:a)if(i.second!=t)return false;
        return true;
            
    }
};