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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *prev=head;
        ListNode *curr=head->next;
        ListNode *temp=prev;
        int sum=0;
        while(curr)
        {   
           
            if(curr->val==0)
            {
                curr->val=sum;
                prev->next=curr;
                prev=curr;sum=0;
            }
            else
              sum=sum+curr->val;
            curr=curr->next;
        }
        return temp->next;
    }
};