/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        auto dcopy = new Node(head->val);
        map<Node*, Node*> ma;
        ma[head] = dcopy;
        auto curr = head;
        while(curr){
            if(curr->next){
                int nval = curr->next->val;
                if(ma[curr->next]==NULL) ma[curr->next] = new Node(nval);
                ma[curr]->next = ma[curr->next]; 
            }
            if(curr->random){
                int rval = curr->random->val;
                if(ma[curr->random]==NULL) ma[curr->random] = new Node(rval);
                ma[curr]->random = ma[curr->random];
            }
            curr = curr->next;
        }
        return dcopy;
    }
};