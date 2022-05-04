class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int t=0,ans=0,t1=0;
        for(int i=0;i<bank.size();i++)
        { t1=0;
          for(char ch:bank[i])if(ch=='1')t1++;
          if(t1>0 ){if(i!=0)ans+=t*t1;swap(t,t1);}
        }
        return ans;
    }
};