class Solution {
public:
    string toGoatLatin(string sentence) {
   string ans="";
        stringstream s(sentence);
        string word,check="aeiouAEIOU";
        int c=1;
        while(s>>word){
            if(check.find(word[0])!=string::npos) ans+=word+"ma";
            else ans+=word.substr(1,word.size()-1)+word[0]+"ma";
            ans+=string(c,'a')+" ";
            c++;
        }
        return ans.substr(0,ans.size()-1);
    }
};