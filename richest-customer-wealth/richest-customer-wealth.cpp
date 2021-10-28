class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int c=0, max=0;
        for(int i=0;i<accounts.size();i++)
        {c=0;
            for(int j:accounts[i])
            c+=j;
            if(c>max)max=c;
        }
        return max;
    }
};