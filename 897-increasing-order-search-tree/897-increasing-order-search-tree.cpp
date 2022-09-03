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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans=new TreeNode(0);
        TreeNode* an=ans;
        stack<TreeNode*>a;
        while(true){
            while(root){
                a.push(root);
                root=root->left;
            }
            if(a.empty())break;
            root=a.top();
            a.pop();
            TreeNode* temp=new TreeNode(root->val);
            ans->right=temp;
            ans=ans->right;
            root=root->right;
        }
        return an->right;
    }
};
//recurcive approch-https://leetcode.com/problems/increasing-order-search-tree/discuss/958108/C%2B%2B-Inorder-Traversal-O(N)-easy-to-understand