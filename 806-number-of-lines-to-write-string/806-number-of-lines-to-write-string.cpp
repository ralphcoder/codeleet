class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int c=0,d=0;
        for(char ch: s)
        {   
            d+=widths[ch-97];
            if(d>100)c++,d=widths[ch-97];
        }
        if(d>0)c++;
        vector<int> ans={c,d};
        return ans;
    }
};