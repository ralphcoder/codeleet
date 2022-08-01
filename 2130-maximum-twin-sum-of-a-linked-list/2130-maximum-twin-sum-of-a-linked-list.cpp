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
    int pairSum(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = new ListNode(-1,head);
        vector<int>a;
        int c=0,ans=0;
         
        while(slow){
            if(fast->next!=NULL && fast->next->next!=NULL)
            {
                a.push_back(slow->val);
                c++;
                fast=fast->next->next;
            }
            else
            {
                if((a[c-1]+slow->val)>ans) ans=a[c-1]+slow->val;
                c--;
            }
            slow=slow->next;
        }
        return ans;
    }
};