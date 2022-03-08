class Solution {
public:
    int countLargestGroup(int n) {
        int c=0,ma=0;
        map<int,int>a;
        for(int i=1;i<=n;i++)
        {
            int t=i;
            int sum=0;
            while(t){
               sum+=t%10;
                t/=10;
            }
            a[sum]++;
            if(a[sum]>ma){ma=a[sum];c=0;}
            if(a[sum]==ma)c++;
        }
        return c;
    }
};