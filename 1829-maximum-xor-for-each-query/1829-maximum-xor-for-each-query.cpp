class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mt) {
       vector<int>ans;int si=nums.size()-1,xo=nums[0], t=pow(2,mt)-1;
        for(int i=1;i<nums.size();i++){
            ans.push_back(xo^t);
            cout<<xo<<" ";
            xo^=nums[i];
        } ans.push_back(xo^t);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};