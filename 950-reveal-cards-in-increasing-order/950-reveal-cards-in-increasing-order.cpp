class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort (deck.rbegin(),deck.rend());
        deque<int>q;
        q.push_front(deck[0]);
        for(int i=1;i<deck.size();i++){
            q.push_front(q.back());
            q.pop_back();
            q.push_front(deck[i]);
        }
        return vector<int>(q.begin(),q.end());
    }
};