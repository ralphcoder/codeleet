class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sa) {
        int c=0,t=0;
        map<int, int>a;
        for(auto i:s)a[i]++;
       for(int i=0; i<sa.size() && a[sa[i]]>0;i++){
            a[sa[i]]--;}
        
        return max(a[1],a[0]);
    }
};