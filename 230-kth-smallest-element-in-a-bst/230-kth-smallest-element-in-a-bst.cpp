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
    int ind=0,ans=0;
    void find(TreeNode* root,int k){
        if(root==NULL) return ;
        find(root->left,k);
        ind++;
        if(ind==k) ans=root->val;
        find(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)return 0;
        find(root,k);
        return ans;
    }
};