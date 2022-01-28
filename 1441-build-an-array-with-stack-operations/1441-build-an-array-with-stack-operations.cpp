class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>a;int t=0;
        for(int i =0;i<target.size();)
        {   a.push_back("Push");
            if(target[i]!=++t)a.push_back("Pop");
            else i++;
        }
        return a;
    }
};