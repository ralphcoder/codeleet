class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool>a,b;
        vector<int>ans;
       for(int i:nums1)a[i]=true;
        for(int i:nums2)b[i]=true;
        for(auto i:a)if(b[i.first])ans.push_back(i.first);
        return ans;
    }
};