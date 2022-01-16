class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int d=0,c=0,max=1;
        for(int i:seats)
        {  if(i==0)
             c++;
         else
            { if(d==0)
               {
                d++;
                if(c>1)max=c;}//for case like- 00011
             else
             { 
                if (c>1 && c>max*2)max=(c+1)/2;}
             c=0;
            }
        }
    return max>c?max:c;}
};