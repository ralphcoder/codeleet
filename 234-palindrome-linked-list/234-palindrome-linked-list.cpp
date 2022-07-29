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
      int n=0,c=0;
        vector<int>a;
        while(head)
        {
           a.push_back(head->val);
            head=head->next;
            c++;
        } 
        int left=0,right=(c+1)/2;
        if(c%2==0)  left=(c/2)-1;
        else left=(c/2)-1,c=c-1;
        c=c/2;
        
        while(c){
            cout<<a[left]<<" "<<a[right]<<"--";
            if(a[left--]!=a[right++])return false;c--;}
        return true;
    }
};