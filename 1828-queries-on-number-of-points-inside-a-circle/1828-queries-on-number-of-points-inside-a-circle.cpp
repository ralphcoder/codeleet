class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int>a;int c=0;
        for(int i=0;i<q.size();i++){
            c=0;
            for(int j=0;j<p.size();j++){
               int b= (q[i][0]-p[j][0])*(q[i][0]-p[j][0])+(q[i][1]-p[j][1])*(q[i][1]-p[j][1]);
              if(b<=(q[i][2]*q[i][2]))c++;
                   
            }
            a.push_back(c);
        }
        return a;
    }
};