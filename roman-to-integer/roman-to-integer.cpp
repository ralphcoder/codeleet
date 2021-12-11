class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        map<char,int>value={
         {'I',1},
         {'V',5},
         {'X',10},
         {'L',50},
         {'C',100},
         {'D',500},
         {'M',1000}};
         sum=value[s.back()];
        for(int i=s.size()-2;i>=0;i--)
        {
       
            if(value[s[i+1]]<=value[s[i]])
                sum+=value[s[i]];
            else
                sum-=value[s[i]];
        }
        return sum;
    }
};