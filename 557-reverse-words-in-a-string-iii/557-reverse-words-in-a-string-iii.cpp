class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string ans="",str="";
        for(char ch:s)
        {   str+=ch;
            if(ch==' ')
            {reverse(str.begin(),str.end()-1);
             ans+=str;str="";}
        }
        return ans.substr(0,ans.size()-1);
    }
};