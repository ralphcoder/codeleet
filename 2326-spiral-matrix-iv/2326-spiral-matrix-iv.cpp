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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* dum) {
        vector<vector<int>>a(m, vector<int>(n,-1));
        ListNode *head=new ListNode(-1,dum);
        int u=0,l=0,r=n-1,d=m-1;int t=0;
        while(u <= d && l <= r){
        for(int col=l;col<=r;col++){
            if(head->next!=NULL)
            head=head->next;
            else break;
            a[u][col]=head->val;
        }
            if(++u>d)break;
            
        for(int row=u;row<=d;row++){
            if(head->next!=NULL)
            head=head->next;
            else break;
            a[row][r]=head->val;

        }
            if(--r<l)break;
            
        for(int col=r;col>=l;col--){
            if(head->next!=NULL)
            head=head->next;
            else break;
            a[d][col]=head->val;
        }
            if(--d<u)break;
            
        for(int row=d;row>=u;row--){
            if(head->next!=NULL)
            head=head->next;
            else break;
            a[row][l]=head->val;

        }
            if(l++>r)break;
        }
        return a;
        
    }
};