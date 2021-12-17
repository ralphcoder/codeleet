class Solution {
public:
    int maximum69Number (int num) {
       string s =to_string(num);
        if(s.find('6')==string::npos)return num;
       return stoi(s.substr(0,s.find('6'))+'9'+s.substr(s.find('6')+1,s.back()));
    }
};