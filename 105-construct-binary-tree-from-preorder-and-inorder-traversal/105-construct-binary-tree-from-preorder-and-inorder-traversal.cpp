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
    unordered_map<int,int>inMap;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i;
        for( i=0;i<inorder.size();i++) inMap[inorder[i]]=i;
        TreeNode* root=makemap(preorder,0,i-1,inorder,0,i-1);
        return root;
    }
    TreeNode* makemap(vector<int>preorder,int prestart,int preend,vector<int>inorder,int instart,int inend){
        if(prestart>preend||instart>inend)
        return NULL;
        TreeNode* root=new TreeNode (preorder[prestart]);
        int atind=inMap[root->val];
        int left=atind-instart;
        root->left=makemap(preorder,prestart+1,prestart+left,inorder,instart,atind-1);
        root->right=makemap(preorder,prestart+left+1,preend,inorder,atind+1,inend);
        return root;
    }
};