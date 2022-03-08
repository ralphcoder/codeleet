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
    bool hasCycle(ListNode *head) {
        ListNode *fastpoint=head;
        ListNode *slowpoint=head;
        if(!head)return false;
        while(fastpoint->next && fastpoint->next->next){
            fastpoint=fastpoint->next->next;
           slowpoint =  slowpoint->next;
            if(fastpoint==slowpoint)return true;
            
        }
        return false;
    }
};