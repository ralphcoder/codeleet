class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> a;
        map<string, int> b;int c=0;
        for(auto i:words1)++a[i];
        for(auto i:words2) {
            b[i]++;
            if(a[i]==1 ){
                if(b[i]==1)c++;
                if( b[i]==2)c--;
            }} 
            return c;
    }
};