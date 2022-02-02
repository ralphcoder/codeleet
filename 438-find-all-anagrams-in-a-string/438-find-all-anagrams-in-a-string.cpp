class Solution {
public: 
    bool anagram(string s,vector<int> b){
        for(auto i:s){if(b[i-'a']==0)return false;b[i-'a']--;}
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
         vector<int> a(26,0);
        for(auto i:p)a[i-'a']++;
        
        vector<int>ans;
       int ps=p.size();
       int ss=s.size();
        string temp="";
        for(int i =0;i<ss;i++)
        {   temp+=s[i];
        if(temp.size()<ps)continue;
        if(anagram(temp,a))ans.push_back(i-ps+1);
        temp.erase(temp.begin());}
        
        return ans;
    }
};