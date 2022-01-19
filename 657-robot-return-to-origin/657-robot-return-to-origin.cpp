class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;int y=0;
        for(char ch:moves)ch=='U'?y+=1:ch=='D'?y-=1:ch=='L'?x-=1:ch=='R'?x+=1:0;
        
        return x==0 && y==0;
    }
};