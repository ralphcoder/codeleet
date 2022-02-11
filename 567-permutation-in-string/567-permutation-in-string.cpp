class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.size();
        int a[26]={0};
        int b[26]={0};
        for(char ch:s1)a[ch-'a']++;int t=0;
        for(int i=0;i<s2.size();i++){
            b[s2[i]-'a']++;t++;
             if( i<n-1)
                continue;
            int c=1;cout<<t;
            for(int j=0;j<26;j++){
                cout<<a[j]<<"-"<<b[j]<<" ";
                if(a[j]<b[j]){c=0;break;}}
            if(c==1){return true;}
            cout<<"\n";
            b[s2[i-(n-1)]-'a']--;
            
        }
        return false;
           
    }
};