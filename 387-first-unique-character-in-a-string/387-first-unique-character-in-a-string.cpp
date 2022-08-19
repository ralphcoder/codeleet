class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char, int>a;
    
        for(int i=s.size()-1;i>=0;i--) a[s[i]]++;
        char ch='6';int t=-1;
        for(auto i: a)
            if(i.second ==1){ch=i.first;break;}
        for(int i=0;i<s.size();i++)
            if(s[i]==ch){t=i;break;}
        return t;
    }
};