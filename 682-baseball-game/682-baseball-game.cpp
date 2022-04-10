class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>s;
      
        for(auto c: ops){char ch=c[0];
             if(ch=='C')s.erase(s.end()-1);//we can use pop() i.e stack for simlicity
            else if(ch=='D')s.push_back(s[s.size()-1]*2);
            else if(ch=='+')s.push_back(s[s.size()-1]+s[s.size()-2]);
            else s.push_back(stoi(c));
                           
        }
            return accumulate(s.begin(),s.end(),0);
        }
};