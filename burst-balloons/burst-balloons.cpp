class Solution {
public:
    int maxCoins(vector<int>& nums) {
        // preprocessing: remove all zeros, insert 1 into the begin and the end
        vector<int> cleaned = {1};
        for (auto &num : nums)
            if (num) cleaned.push_back(num);
        cleaned.push_back(1);

        int n = cleaned.size()-2;
        // dp[start][end] means the max score we can get from bursting [start, end] balloons.
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));

        return maxCoins(1, n, cleaned, dp);
    }
private:
    // the real workhorse
    int maxCoins(int start, int end, vector<int> &nums, vector<vector<int>> &dp) {
        // empty
        if (start>end) return 0;

        // if the result is ready, return it directly.
        if (dp[start][end]!=-1)
            return dp[start][end];

        // the boundary of recursion.
        if (start == end) {
            dp[start][end] = nums[start-1]*nums[start]*nums[start+1];
            return dp[start][end];
        }

        /**
         *
         * max score of [start, end] can be obtained as follow:
         * let lastBurst point to the last balloon to be bursted,
         * the score is the sum of:
         *  1. left part to the lastBurst, i.e, [start, lastBurst-1]
         *  2. the score of nums[start-1], nums[lastBurst], nums[end+1],
         *     since all the balloons in [start, lastBurst-1] and [lastBurst+1, end] are bursted.
         *  3. right part from the lastBurst, i.e, [lastBurst+1, end]
         * Just iterate lastBurst from start to end to calculate the max score of [start, end]
         *
         */
        for (int lastBurst=start; lastBurst<=end; ++lastBurst) {
            dp[start][end] = max(dp[start][end],
                                nums[start-1]*nums[lastBurst]*nums[end+1] +
                                    maxCoins(start, lastBurst-1, nums, dp) +
                                    maxCoins(lastBurst+1, end, nums, dp));
        }
        return dp[start][end];
    }
};