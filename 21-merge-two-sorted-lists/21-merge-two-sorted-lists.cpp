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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 and !list2)
        {
            return nullptr;
        }
        else if(!list1)
        {
            return list2;
        }
        else if(!list2)
        {
            return list1;
        }
        vector<int> temp;
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        while(curr1!=nullptr)
        {
            temp.push_back(curr1->val);
            curr1 = curr1->next;
        }
        while(curr2!=nullptr)
        {
            temp.push_back(curr2->val);
            curr2 = curr2->next;
        }
        sort(temp.begin(),temp.end());
        ListNode* head=new ListNode(temp[0]);
        ListNode* curr=head;
        int i=1;
        while(i<temp.size())
        {
            curr->next = new ListNode(temp[i]);
            i++;
            curr = curr->next;
        }
        return head;
    }
};