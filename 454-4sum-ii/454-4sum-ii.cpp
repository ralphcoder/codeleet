class Solution {
public:
    int fourSumCount(vector<int>& n1, vector<int>& n2, vector<int>& n3, vector<int>& n4) {
        int c=0;map<int,int>h;
      for(int a:n1)
          for(int b:n2)
              h[a+b]++;
        for(int a:n3)
            for(int b:n4)
              c+=h[-a-b];
        return c;
        
      
        
        return c;
    }
};