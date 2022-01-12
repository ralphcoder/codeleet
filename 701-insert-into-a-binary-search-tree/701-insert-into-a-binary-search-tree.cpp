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
   TreeNode *insertIntoBST(TreeNode *root, int val)
	{
		TreeNode **cur = &root;
		while( *cur )
			cur = (val > (*cur)->val) ? &(*cur)->right : &(*cur)->left;
		*cur = new TreeNode(val);
		return root;
	}
};