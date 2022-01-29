class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> a;
        sort(arr.begin(),arr.end()); int d=INT_MAX;
        for(int i=1;i<arr.size();i++)
            d=min(arr[i]-arr[i-1],d);
        for(int i =1;i<arr.size();i++)
            if(arr[i]-arr[i-1]==d)a.push_back({arr[i-1],arr[i]});
        return a;
    }
};