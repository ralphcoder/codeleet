class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        for(char ch=s[0];ch<=s[3];ch++)
        {
            for(int i=s[1]-'0';i<=s[4]-'0';i++)
                ans.push_back(ch+to_string(i));
        }
        return ans;
    }
};