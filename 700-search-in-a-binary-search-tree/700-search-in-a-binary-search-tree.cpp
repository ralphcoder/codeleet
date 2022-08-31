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
    TreeNode*tem;int v;
    void search(TreeNode* root){
        if(root==NULL)return;
        if(root->val==v){tem=root;return;}
        search(root->left);
        search(root->right);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        v=val;
        search(root);
        return tem;
    }
};