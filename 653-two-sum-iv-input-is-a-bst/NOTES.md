/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
bool find(TreeNode* boot,int key){
while(boot){
if(boot->val==key)return true;
boot=boot->val>key?boot->left:boot->right;
}
return false;
}
bool findTarget(TreeNode* root, int k) {
if(!root|| (!root->left && !root->right))return false;
return find(root,k-root->val);
return findTarget(root->right, k)|| findTarget(root->left,k);
}
};