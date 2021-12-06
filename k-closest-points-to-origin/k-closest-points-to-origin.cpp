typedef pair<int,vector<int>> p;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<p> minh;
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++)
        {  vector<int>temp;
             int x=points[i][0];
             int y=points[i][1];
            temp.push_back(x);temp.push_back(y);
            minh.push({(x*x)+(y*y),temp});
            if(minh.size()>k) minh.pop();
        }
        
        while(minh.size()!=0)
        {
         ans.push_back(minh.top().second);
        minh.pop();}
    return ans;}
};