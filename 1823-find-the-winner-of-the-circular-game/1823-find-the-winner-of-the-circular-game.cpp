class Solution {
public:
    int findTheWinner(int n, int k) {
         deque <int> a;int b=0;
        for(int i=1;i<=n;i++)a.push_back(i);
        for(int i=1;a.size()!=1;i++){
            if(i%k==0)a.pop_front();
          else
          {  b=a.front();
              a.pop_front();
             a.push_back(b);
            }
        }
        return a.front();
    }
};