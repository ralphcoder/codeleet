class Solution {
public:
    int countBalls(int low,int high) {
        map<int,int>a;int ans=0;
        for(int i=low;i<=high;i++)
        { int sum=0,t=i;
            while(t)sum+=t%10,t/=10;
         if(++a[sum]>ans)ans=a[sum];
        }
        return ans;
    }
};