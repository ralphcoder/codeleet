class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>a;
        string s="";char t='a';
        for(char ch:key)  if(ch!=' ' && !a[ch])a[ch]=t++;
        for(char ch: message){
            if(ch!=' ')s+=a[ch];
            else s+=' ';
        }
        return s;
    }
};