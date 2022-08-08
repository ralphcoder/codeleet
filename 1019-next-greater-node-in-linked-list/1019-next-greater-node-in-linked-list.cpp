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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>a;
       while(head){a.push_back(head->val);head=head->next;}
        stack<int>b;
        vector<int>ans;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(b.size()==0)ans.push_back(0);
            else if( b.top()>a[i])ans.push_back(b.top());
            else {
                while(b.size()>0 && b.top()<=a[i])b.pop();
                if(b.size()==0)ans.push_back(0);
                else ans.push_back(b.top());
            }
            b.push(a[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
//https://leetcode.com/problems/next-greater-node-in-linked-list/discuss/265548/C%2B%2B-O(n)-stack