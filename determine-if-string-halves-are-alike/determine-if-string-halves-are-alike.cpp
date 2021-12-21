class Solution {
public:
    bool halvesAreAlike(string s) {
        int half=s.size()/2;
        string see="aeiouAEIOU";
        int a=0,b=0;
        for(int i=0;i<s.size();i++)
        {
            if(i<half && see.find(s[i])!=string::npos)a++;
            else if(see.find(s[i])!=string::npos)b++;
        }
        return(a==b);
    }
};