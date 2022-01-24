class Solution {
public:
    bool detectCapitalUse(string w) {
        int c=0;
        for(int i=0;i<w.size();++i)if(isupper(w[i]))c++;
        cout<<c;
         return(c==0 || c==w.size()||(c==1 && isupper(w[0])));
            
    }
};