class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>a;
        map<int,int>accu;
        for(int i: arr)a[i]++;
        for(auto i: a)if(++accu[i.second]>1)return false;
        return true;
        
    }
};