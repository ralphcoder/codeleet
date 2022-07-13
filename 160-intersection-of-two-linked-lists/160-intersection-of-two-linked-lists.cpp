/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>a;
        while(headA!=NULL)
        {
            a[headA]++;
            headA=headA->next;
        }
        while(headB!= NULL)
        {  if (a[headB])return headB;
            headB=headB->next;}
        return NULL;
    }
};