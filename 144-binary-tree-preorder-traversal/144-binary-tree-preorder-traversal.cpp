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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*>a;
        a.push(root);
        while(!a.empty()){
            root=a.top();
            ans.push_back(root->val);
            a.pop();
            if(root->right!=NULL)a.push(root->right);
            if(root->left!=NULL)a.push(root->left);
        }
        return ans;
    }
};
// iterative all:\U0001f917 https://leetcode.com/problems/binary-tree-preorder-traversal/discuss/1540041/C%2B%2B-or-Inorder-Preorder-Postorder-All-3-solution-or-0ms-faster-than-100