class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int sx = startPos[0];
        int sy = startPos[1];
        
        map<char, pair<int,int>>mp = {{'L',{0,-1}}, {'R',{0,1}}, {'U',{-1,0}}, {'D',{1,0}}};
        
        vector<int>ans;
        int count;
        for(int i=0; i<s.length(); i++){
            count = 0;
            int newX = sx;
            int newY = sy;
            for(int j=i; j<s.length(); j++){
                newX += mp[s[j]].first;
                newY += mp[s[j]].second;
              
                if(newX >= n || newY >= n || newX < 0 || newY < 0)    break;
                else{    
                    count ++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};