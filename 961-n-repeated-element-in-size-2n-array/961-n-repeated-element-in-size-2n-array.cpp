class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>a;int size=nums.size()/2;
        for(int i:nums){
            a[i]++;
            if(a[i]==size)return i;
        }
        return 0;
    }
};