class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int>a;
        for(char ch:mag)a[ch]++;
        for(char ch:ran){
            if(!a[ch] || a[ch]--<0)return false;
        }
        return true;
    }
};