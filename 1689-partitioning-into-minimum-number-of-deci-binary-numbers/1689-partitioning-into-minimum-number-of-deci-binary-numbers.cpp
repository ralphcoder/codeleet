#include<bits/stdc++.h>;
class Solution {
public:
    int minPartitions(string n) {
        int c=0;
        for(char i:n)
            if(int(i)-'0'>c)c=int(i)-'0';
        return c;
    }
};