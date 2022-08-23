/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
      int c=0;
        vector<int>a;
        while(head)
        {
           a.push_back(head->val);
            head=head->next;
            c++;
        } int b=c-1;
        for(int i=0;i<c/2;i++,b--)
        if(a[i]!=a[b])return false;
        return true;
    }
};
//https://leetcode.com/problems/palindrome-linked-list/discuss/64490/My-easy-understand-C%2B%2B-solution