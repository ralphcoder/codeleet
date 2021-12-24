class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i:words)
        {string c=i.size()%2==0?i.substr(i.size()/2,i.size()):i.substr((i.size()/2)+1,i.size());
         string s=i.substr(0,i.size()/2);reverse(s.begin(),s.end());
           if(c==s)return i;
         }
               
         return "";
    }
};