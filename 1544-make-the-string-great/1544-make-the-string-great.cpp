class Solution {
public:
    string makeGood(string s) {
        for(int i=0;i<s.size();)
        {    cout <<i<<" ";
            if(abs(s[i]-s[i+1])==32){s.erase(i,2);i-1==-1?i=0:i-=1;}
            else i++;
          cout<<i<<s<<" ";
        }
       
        return s;
    }
};