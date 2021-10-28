class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> great;
        int t=candies[0];
        for(int i:candies)
        {
            if(i>t)t=i;
        }
        for(int i:candies)
        {
            if(i+extraCandies>=t)
                great.push_back(true);
            else
                great.push_back(false);
        }
        return great;
    }
};