class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
        unordered_map<char,int>a;
        unordered_map<char,int>c;
        vector<string>ans;
        for(char ch:w[0])a[ch]++,c[ch]++;
        for(int i=1;i<w.size();i++)
        {  unordered_map<char,int>b;
            for(char ch:w[i])
                b[ch]++;
           for(char ch:w[0]) 
              c[ch]=min(b[ch],c[ch]);
           }
          for(auto i:c)
          {int a=i.second;
              while(a--)ans.push_back(string()+i.first);}
            
        return ans;
        
    }
};