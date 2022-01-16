class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;int c=n%2?n-n/2:(n-n/2)+1;
        for(int i=n-(n+n/2);i<c;i++){
            if(i==0 && n% 2==0)continue;
            arr.push_back(i);}
        return arr;
    }
};