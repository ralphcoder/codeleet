class Solution {
public:
    int maxDistance(vector<int>& c) {
         int n=c.size(); int b=n;int a=0;
        for(int i=0;i<n;i++){
            if(c[i]!=c[n-1])a=max(a, n-i-1);
            if(c[--b]!=c[0])a=max(a, b);
        } 
    
    return a;
    }
};