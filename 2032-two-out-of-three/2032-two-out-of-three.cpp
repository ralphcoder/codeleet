class Solution {
public:
   bool cnt[3][101] = {};
vector<int> twoOutOfThree(vector<vector<int>> nums) {
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i)
        for (int n : nums[i])
            cnt[i][n] = true;
        for (int n = 1; n <= 100; ++n) {
            int total = 0;
            for (int i = 0; i < nums.size(); ++i)
                total += cnt[i][n];
            if (total > 1)
                res.push_back(n);
        }
    return res;
}
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    return twoOutOfThree({nums1, nums2, nums3});
}
};