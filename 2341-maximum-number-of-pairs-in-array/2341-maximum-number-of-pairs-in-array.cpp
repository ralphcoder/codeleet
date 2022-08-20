class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pair=0,left=0;
        map<int,int>a;
        for(int i:nums){
            if(++a[i]%2==0)left-=1,pair++;
            else left++;
        }
        return {pair,left};
    }
};