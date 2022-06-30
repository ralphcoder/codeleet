class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;int i=0;
        for(string s:words){
            map<char,char>a;
            map<char,char>b;
            for( i=0;i<pattern.size();i++){
                if(!a[pattern[i]])a[pattern[i]]=s[i];
                else if(a[pattern[i]]!=s[i])break;
               if(!b[s[i]])b[s[i]]=pattern[i];
                else if( b[s[i]]!=pattern[i])break;
            }
            if(i==pattern.size())ans.push_back(s);
        }
        return ans;
    }
};
//https://leetcode.com/problems/find-and-replace-pattern/discuss/1221096/Easy-Solutions-w-Explanation-or-Two-Maps-Single-Map-and-Word-Normalization