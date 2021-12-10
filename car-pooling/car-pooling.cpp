typedef vector<int> p;
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        priority_queue<p, vector<p>, greater<p>>minh;
        for(int i=0;i<trips.size();i++)
        {   vector<int> t={};
            t.insert(t.end(),{trips[i][1],trips[i][0],0});
           minh.push(t);
             t.clear();
            t.insert(t.end(),{trips[i][2],trips[i][0],1});
           minh.push(t);
        }int s=0,g=0;int a=0,b=0,c=0;
        while (minh.size()!=0)
        {   vector<int>t={minh.top()};
            
          if(t[2]==0)s+=t[1],g=t[0];
          if(t[2]==1)s-=t[1],g=t[0];
              if(s>capacity)
              {  minh.pop();t={minh.top()};
                  if(t[0]==g)
                      continue;
                  else
                   return false;
              }

            minh.pop();
        }
        return true;
    }
};