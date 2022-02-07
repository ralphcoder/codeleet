class Solution {
public:
    vector<int> minOperations(string b) {
      vector<int>a;
        vector<int>ans;
        for(int i=0;i<b.size();i++)if(b[i]=='1')a.push_back(i);
        for(int i=0;i<b.size();i++){
            int sum=0;
            for(int ind:a)sum+=abs(i-ind);
            ans.push_back(sum);
        }
            
        return ans;
    }
};