class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rC, int cC) {
        priority_queue<pair<int,vector<int>>>maxh;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                maxh.push({(abs(rC-i)+abs(cC-j)),{i,j}});
            }}
            vector<vector<int>>a;
            while (maxh.size()!=0)
            {
                a.push_back(maxh.top().second);maxh.pop();}
        reverse(a.begin(),a.end());
        return a;
    }
};