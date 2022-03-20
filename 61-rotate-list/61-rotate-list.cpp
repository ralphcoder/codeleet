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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)return head;
        ListNode* temp=head;
        int size=1;
        while(temp->next!=nullptr){
            size++;
            temp=temp->next;
        }
        k=k%size;
        ListNode* ans=head;
        for(int i=0;i<k;i++){
            ans=solve(ans);
        }
        return ans;
        
    }
    ListNode* solve(ListNode* head){
        ListNode* temp=head;
        ListNode* prev;
        while(temp->next!=NULL){
            if(temp->next->next==NULL)prev=temp;
            temp=temp->next;
        }
        temp->next=head;
        prev->next=NULL;
        return temp;
    }
};
