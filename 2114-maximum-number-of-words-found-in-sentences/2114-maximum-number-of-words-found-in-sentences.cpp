class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int a=0,c=0;
        for(auto i: sentences)
        {c=0;
            for(char ch:i)
                if(ch==' ')c++;
            if(c>a)a=c;
        }
        return a+1;
    }
};