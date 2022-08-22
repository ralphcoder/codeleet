class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>a;
        for(int i:nums)a[i]++;
        for(auto i:a)
            if(i.second%2!=0)return false;
        return true;
    }
};