class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr;
        auto dummy = new ListNode(), iter = head;
        for(; iter; iter = iter -> next) 
            arr.push_back(iter -> val);
        iter = dummy;
        for(int i = 0; i < size(arr); i += 2) 
            iter = iter -> next = new ListNode(arr[i]);
        for(int i = 1; i < size(arr); i += 2) 
            iter = iter -> next = new ListNode(arr[i]);
        return dummy -> next;
    }
};
//https://leetcode.com/problems/odd-even-linked-list/discuss/1607746/C%2B%2B-Simple-Solution-w-Images-and-Explanation-or-Brute-Force-%2B-O(1)-In-place-Transformation