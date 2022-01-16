class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> a;
        if (paths.size()==1) return paths[0][1];
        string ch="";
        for(auto i:paths)a[i[0]]++,a[i[1]]+0;
        for(auto i:a)if(i.second==0)ch=i.first;
        return ch;
    }
};