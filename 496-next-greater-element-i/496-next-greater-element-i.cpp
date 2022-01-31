class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>a;int c;
        for(int i=0;i<nums2.size();i++){c=0;
            for(int j=i;j<nums2.size();j++)
                if(nums2[i]<nums2[j]){a[nums2[i]]=nums2[j];c=1;break;}
            if(c==0)a[nums2[i]]=-1;
        }
            nums2.clear();
        for(auto i: nums1)
            nums2.push_back(a[i]);
        return nums2;
    }
};