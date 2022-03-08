class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min=INT_MAX;
        int max=0;
        for(int i:nums){
            if(i<min)min=i;
            if(i>max)max=i;
        } if(min+k>max-k)return 0;
        return max-min-k-k;
        
    }
};