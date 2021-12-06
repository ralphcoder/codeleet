class Solution {
public:
    int maximumScore(int a, int b, int d) {
        priority_queue<int>maxh;
        maxh.push(a); maxh.push(b); maxh.push(d);int c=0;
        while(true)
        {  
            int a1=maxh.top();maxh.pop();
            int b1=maxh.top();maxh.pop();
            if(a1==0 || b1==0)
                break;
            maxh.push(a1-1);
            maxh.push(b1-1);
            c++;
        }
        return c;
    }
};