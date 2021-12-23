class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
     for(int i=s.size()-1;i>=0;i--)
     {
         if(s[i]=='#')ans=char(96+stoi(s.substr(i-2,i)))+ans,i-=2;
         else
             ans=char(96+((int)s[i]-'0'))+ans;
     }
        return ans;
    }
};