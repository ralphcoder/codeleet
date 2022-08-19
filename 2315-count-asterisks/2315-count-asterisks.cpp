class Solution {
public:
    int countAsterisks(string s) {
        int c=0,ans=0;
        for(char ch:s){
            if(ch=='|')c++;
            if(c%2==0 && ch=='*')ans++;
        }
        return ans;
    }
};