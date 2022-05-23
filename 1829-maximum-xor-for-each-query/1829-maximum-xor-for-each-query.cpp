class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mt) {
        int s=nums.size();
       vector<int>ans(s,0);int si=nums.size()-1,xo=nums[0], t=pow(2,mt)-1;
        for(int i=1;i<s;i++){
            ans[s-i]=(xo^t);
            xo^=nums[i];
        } 
        ans[0]=(xo^t);
        return ans;
    }
};