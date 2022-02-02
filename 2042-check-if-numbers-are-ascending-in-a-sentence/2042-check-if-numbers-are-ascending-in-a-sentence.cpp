class Solution {
public:
    bool areNumbersAscending(string s) {
       int t=0,pre=0;
        for(char ch:s){
            if(isdigit(ch))
                t=t*10+(ch-'0');
            else if(t!=0)
            {cout<<t<<" ";
                if(t<=pre) return false;
              pre=t;
              t=0;}
        }
        return t==0 || pre<t;
    }
};