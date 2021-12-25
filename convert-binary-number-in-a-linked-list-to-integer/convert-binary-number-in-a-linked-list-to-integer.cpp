class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s{};
        for(; head; head = head -> next) s += head -> val + '0';
        return stoull(s, 0, 2);
    }
};