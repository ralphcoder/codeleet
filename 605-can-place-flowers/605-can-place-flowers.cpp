class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n) {
        fl.insert(fl.begin(),0);
        fl.push_back(0);
        for(int i=1;i<fl.size()-1;i++)
            if(fl[i-1]+fl[i]+fl[i+1]==0)--n,i++;
        return (n<=0);
    }
};