class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
          int numJewels = 0;
        for (char stone : stones) {
            if (jewels.find(stone) != std::string::npos)
                numJewels++;
        }
              
        return numJewels;
    }
};