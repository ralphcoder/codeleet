class Solution {
public:
    int minCostToMoveChips(vector<int>& pos, int even=0) {
     for(auto i:pos)i%2==0?even++:0;
        return even<pos.size()-even?even:pos.size()-even;
    }
};