/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        
        // same time -> same level:
        // BFS:
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
                      
            int siz = q.size();
            while(siz--){
                Node* curNode = q.front();
                q.pop();
                
                //connect to second node:
                if(q.empty() == false and siz-1 >= 0) curNode->next = q.front();
                
                // push children:
                if(curNode->left) q.push(curNode->left);
                if(curNode->right) q.push(curNode->right);
                
            }
            
        }
        
        return root;
    }
};
