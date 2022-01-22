class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      map<string, int>a;
        for(auto i:arr)++a[i];
        for(auto i:arr) if(a[i]==1 && --k == 0)return i;
    return "";}
};