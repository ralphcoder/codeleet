class Solution {
public:
    string defangIPaddr(string address) {
        string str="";
        for(char t: address){
            if(t=='.')
                str+="[.]";
            else
                str+=t;
        }
        return str;
    }
};