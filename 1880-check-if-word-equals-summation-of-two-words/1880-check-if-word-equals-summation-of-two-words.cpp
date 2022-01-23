class Solution {
public:
    bool isSumEqual(string f, string s, string t) {
        int m=max(f.size(),max(s.size(),t.size()));
        int a=0,b=0,c=0,i=0;
        cout<<m;
        while(m)
        {
            if(i<f.size())a=a*10+((int)f[i]-97);
            if(i<s.size())b=b*10+((int)s[i]-97);
            if(i<t.size())c=c*10+((int)t[i]-97);
            
            m--;i++;
        }
      
        return (a+b==c);
    }
};