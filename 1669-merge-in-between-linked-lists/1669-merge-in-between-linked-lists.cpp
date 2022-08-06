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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 =list1;
        ListNode* temp11 =list1;
        ListNode* temp2= list2;
        
        while(temp2->next!=NULL) temp2=temp2->next;
        a--;
        while(a--) temp1=temp1->next;
        while(b--) temp11=temp11->next;
        
        temp1->next=list2;
        temp2->next=temp11->next;
        return list1;
        
    }
};