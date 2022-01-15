class Solution {
public:
   int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for(auto i:sentences)
            res=max(res,(int)count(i.begin(),i.end(),' '));
        return res+1;
    }
};