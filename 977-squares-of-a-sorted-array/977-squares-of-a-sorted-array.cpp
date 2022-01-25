class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int buc[10001]={};
        for(int i:nums)buc[abs(i)]++;
        int c=nums.size(), i=0;
        while(c!=0){
            if(buc[i]>0)ans.push_back(i*i),buc[i]--,c--;
            else i++;
        }
        return ans;
    }
};