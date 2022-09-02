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
    
    int maxPathSu(TreeNode* root,int &sum) {
        if(root==NULL)return 0;
        int ls=max(0,maxPathSu(root->left,sum));
        int rs=max(0,maxPathSu(root->right,sum));
        sum=max(sum,ls+rs+root->val);
        return (root->val+max(ls,rs));
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        maxPathSu(root,sum);
        return sum;
    }
};