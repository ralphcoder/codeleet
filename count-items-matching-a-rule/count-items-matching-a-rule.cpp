class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string ruleValue) {
      int match=0;int c=0;
        if(rulekey=="type")
            match=0;
        if(rulekey=="color")
            match=1;
        if(rulekey=="name")
            match=2;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][match]==ruleValue)
                c++;
        }
        return c;
    }
};