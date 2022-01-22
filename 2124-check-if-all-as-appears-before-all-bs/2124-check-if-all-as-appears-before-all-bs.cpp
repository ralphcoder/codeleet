class Solution {
public:
    bool checkString(string s, int c=0) {
         for(auto i:s)
         { if(i=='b')c=1;
         else if(c==1)return false;}
        return true;
    }
};