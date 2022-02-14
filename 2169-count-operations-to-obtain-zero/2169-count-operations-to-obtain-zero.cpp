class Solution {
public:
    int countOperations(int n1, int n2) {
        int c=0;
        while(n1 && n2){
            if(n1<n2)
                n2=n2-n1;
            else n1=n1-n2;
            c++;
        }
        return c;
    }
};