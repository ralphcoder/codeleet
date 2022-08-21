class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<pair<int,bool>>a;
        vector<int>ans;
        for(int i=1;i<=m;i++)a.push_back({i,true});
        for(int i:queries){
           int c=0;
            for(int j=0;true;j++){
                if(a[j].second)c++;
                if(a[j].first==i && a[j].second){
                    a[j].second=false;
                    a.insert(a.begin(),{i,true});
                    break;
                }
            }
            ans.push_back(c-1);
        }
        return ans;
    }
};