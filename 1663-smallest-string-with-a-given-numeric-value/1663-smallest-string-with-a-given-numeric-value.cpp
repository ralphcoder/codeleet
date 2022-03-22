class Solution {
public:
    string getSmallestString(int n, int k) {
        string res="";
        while(n--){
            res += 'a'+max(k -n*26-1,0);
            k -= res.back()-'a'+1;
        } 
        return res;
    }
};