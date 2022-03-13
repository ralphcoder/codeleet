class Solution {
public:
    bool checkAlmostEquivalent(string w1, string w2) {
        map<char,int> a;
            for(int i=0;i<w1.size();i++) a[w1[i]]++,a[w2[i]]--;
        for(auto i:a)if(i.second>3 || i.second<-3)return false;
                  
        return true;
    }
};