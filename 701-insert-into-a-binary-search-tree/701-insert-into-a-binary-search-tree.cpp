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
   TreeNode *insertIntoBST(TreeNode* root, int val)
	{ if(root==NULL)return new TreeNode(val);
		TreeNode *cur = root;
       TreeNode *prev= root;
		while( cur ){
		if(val > cur->val) {
            prev=cur;
            cur= cur->right ;}
        else{
            prev=cur;  
            cur= cur->left;}}
		cur = new TreeNode(val);
        (prev->val>val)? prev->left=cur:prev->right=cur;
		return root;
	}
};