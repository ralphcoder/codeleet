class Solution {
public:
    int canBeTypedWords(string t, string b) {
        map<char,bool> a;int ans=0;int c=0;t+=' ';
        for(char ch:b)a[ch]=true;
        for(char ch: t){
            if(ch==' '){if(c==0)ans++;c=0;}
            else if(a[ch])c=1;
        }
        return ans;
    }
};