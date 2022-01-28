class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();int pos=-n;
        vector<int>a(n, n);
        for(int i=0;i<n;i++){
            if(s[i]==c)pos=i;
            a[i]=abs(i-pos);
        }
        for(int i=n-1;i>=0;i--)
        {  
            if(s[i]==c)pos=i;
            a[i]=min(a[i],abs(pos-i));
              
        }
        return a;
    }
};