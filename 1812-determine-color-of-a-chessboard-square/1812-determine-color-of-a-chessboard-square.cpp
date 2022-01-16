class Solution {
public:
    bool squareIsWhite(string c) {  
        return (((int(c[0])-96)+(c[1]-'0'))%2!=0);
    }
};