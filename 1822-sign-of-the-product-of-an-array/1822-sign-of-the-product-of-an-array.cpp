class Solution {
public:
    int arraySign(vector<int>& nums,int p=0) {
        for(int i:nums)
        {  if (i==0)return 0;
           if(i<0)p++;}
        return p%2==0?1:-1;
         
    }
};