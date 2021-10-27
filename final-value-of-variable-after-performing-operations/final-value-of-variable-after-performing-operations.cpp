class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int a=0;
        for(string s: operations)
        {
            if(s=="++X"||s=="X++")
                a++;
            else
                a--;
        }
        return a;
    }
};