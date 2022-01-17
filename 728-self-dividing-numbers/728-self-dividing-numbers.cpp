class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int>a;
        for(int i=left;i<=right;i++)
        {   int n=i;
            while(n!=0)
            {int r=n%10;
             if(r==0 || i%r!=0){n=-1;break;}
             n=n/10;
            }
            if(n!=-1) a.push_back(i);
        }
        return a;
    }
};