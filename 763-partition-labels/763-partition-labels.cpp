class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n  = s.size();
        vector<int>ans;
        stack<int>stk;
        int start = 0;
        map<char, int>hm;
        for(int i = 0; i<n; ++i){
            while(!stk.empty() && (hm.end() != hm.find(s[i])) && (stk.top() >= hm[s[i]])){
                stk.pop();
            }
            stk.push(i);
            if(hm.end() == hm.find(s[i])){
                hm[s[i]] = i;
            }
        }
        while(!stk.empty()){
            ans.push_back(stk.top()+1);
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        int sz = ans.size();
        for(int i = sz-1; i>0; --i){
            ans[i] -= ans[i-1];
        }
        return ans;
    }
};