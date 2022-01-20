class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";int l=min(word1.size(),word2.size());
        for(int i =0;i<l;i++) s+=word1[i],s+=word2[i];
        word1.size()>word2.size()?s+=word1.substr(l,word1.size()):s+=word2.substr(l,word2.size());
            return s;
           
    }
};