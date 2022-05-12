class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;int k=0;
        for(int i=0;i<l.size();++i){
            vector<int> tem(begin(nums) + l[i], begin(nums)+r[i]+1);
            sort(tem.begin(),tem.end());
            for( k=2;k<tem.size();++k)
                if(tem[k]-tem[k-1]!=tem[1]-tem[0]) break;
            ans.push_back(k==tem.size());
        }
        return ans;
    }
};