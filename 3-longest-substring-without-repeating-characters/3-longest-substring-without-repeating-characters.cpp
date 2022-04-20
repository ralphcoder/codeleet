class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     vector <int> hash (256,-1);
        int i=0,res=0;
        for (int j = 0;j <s.size(); j++) {
            i=max(i,hash[s[j]]+1);
            res=max(res,j-i+1);
            hash[s[j]]=j;
    }
        return res;
    }
};