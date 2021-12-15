class Solution {
public:
    string removeOuterParentheses(string s) {
     string ans="";
        string temp="";
        int c=0;
        for(int i=0;i<s.size();i++)
        {   if(s[i]=='(') c++;
            else c--;
            temp+=s[i];
            if (c==0 && temp.size()>1) ans+=temp.substr(1,temp.size()-2),temp="";
            
        }
        return ans;
    }
};