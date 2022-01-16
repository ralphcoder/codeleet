#include <bits/stdc++.h>
class Solution {
public:
    int findNumbers(vector<int>& n,int c=0) {
        
        for(auto i:n)if(int(log10(i)+1)%2==0)c++;
        return c;
    }
};