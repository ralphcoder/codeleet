class Solution {
public:
    bool backspaceCompare(string s, string t) {
      string a="",b="";
        int c=0;
        for(int i=s.size()-1;i>=0;i--)
        {
         if(s[i]=='#')c++;
         else{
        if(c==0)a+=s[i];
        if(c>0)c--;
        
        }}
        c=0;
        for(int i=t.size()-1;i>=0;i--)
        {
         if(t[i]=='#')c++;
         else{
        if(c==0)b+=t[i];
        if(c>0)c--;
      
        }}
        cout<<a<<" "<<b;
        return a==b;
    }
};