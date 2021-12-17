class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int c=0,cou=0;
        for(auto i:rectangles)
        {int t= min(i[0],i[1]);
        if(t>c)cou=1,c= t;
        else if( t==c)cou++;
        else;}
              
        return cou;
    }
};