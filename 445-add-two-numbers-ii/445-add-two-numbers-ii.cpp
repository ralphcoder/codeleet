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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> a,b;
        while(l1){
            a.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            b.push(l2->val);
            l2=l2->next;
        }
        int sum=0;
        ListNode *ans= new ListNode(0);
        while(a.size()!=0 || b.size()!=0)//
        {  
            if(a.size()!=0){sum+=a.top();a.pop();}
            if(b.size()!=0){sum+=b.top();b.pop();}
            ListNode *head= new ListNode(sum/10);
            ans->val=sum%10;
            head->next=ans;
            ans=head;
            sum/=10;
        }
        return ans->val==0?ans->next:ans;
    }
};