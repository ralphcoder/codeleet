class Solution {
public:
    string replaceDigits(string s) {
        string t="";
        for(int i=1;i<s.size();i+=2)
        {
           t+=s[i-1];
            t+=char(int(s[i-1])+(int(s[i])-'0')); 
        }
     if(s.size()%2!=0)
         t+=s[s.size()-1];
        return t;
    }
};