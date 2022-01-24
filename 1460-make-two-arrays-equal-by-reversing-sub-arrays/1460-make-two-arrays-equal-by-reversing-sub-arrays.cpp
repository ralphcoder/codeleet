class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& arr) {
         map<int, int>a;int y=0;
        for(int i:arr)a[i]++;
       for(int i=0;i<arr.size();i++)if(a[t[i]])a[t[i]]--,y++;
        return (y==arr.size());
    }
};