class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>maxh;
        unordered_map<char,int>a;
        for(char i: s)
        a[i]++;
        for(auto i: a)
         maxh.push({i.second,i.first});
        
        string s1="";
        while(maxh.size()!=0)
        {
            int c=maxh.top().first;
                while(c!=0)
                {
                    s1+=maxh.top().second;
                    c--;
                }
            maxh.pop();
        }
        return s1;
    }
};