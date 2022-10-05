/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *main=new TreeNode(val);
            main->left=root;
            return main;
        }
      queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            TreeNode *temp=NULL;
            for(int i=0;i<s;i++){
                temp=q.front();
                q.pop();
                if(depth==2){TreeNode* tl=new TreeNode(val);
                                           TreeNode* nextl= temp->left;
                                           temp->left=tl;
                                           tl->left=nextl;
                             TreeNode* tr=new TreeNode(val);
                                           TreeNode* nextr= temp->right;
                                           temp->right=tr;
                                           tr->right=nextr;} 
                else{
                    if(temp->left)q.push(temp->left);
                    if(temp->right)q.push(temp->right);
                    }
            }
            depth--;
        }
           return root;
    }
};