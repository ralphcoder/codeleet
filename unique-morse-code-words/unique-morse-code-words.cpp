class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string a[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
      int c=1;
       vector<string> co ={};
        for(int i=0;i<words.size();i++)
        {
           string s=words[i];
            string p="";
            for(int j=0;j<s.size();j++)
            p+=a[int(s[j])-97];
            co.push_back(p);
            }
    set<string> ape;
        for(int i=0;i<co.size();i++)
            ape.insert(co[i]);
        return ape.size();
    }
};