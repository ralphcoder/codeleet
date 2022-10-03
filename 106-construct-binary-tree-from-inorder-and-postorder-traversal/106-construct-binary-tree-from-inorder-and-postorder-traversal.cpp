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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i;
        for(i=0;i<inorder.size();i++)inMap[inorder[i]]=i;
        TreeNode* root=createtree(inorder,0,i-1,postorder,0,i-1);
        return root;
    }
    TreeNode * createtree(vector<int>inorder, int instart,int inend, vector<int> postorder, int poststart, int postend){
        if(poststart>postend || instart>inend)return NULL;
        TreeNode* root=new TreeNode(postorder[postend]);
        int atind=inMap[root->val];
        int left=atind-instart;
        root->left=createtree(inorder,instart,atind-1,postorder,poststart,poststart+left-1);
        root->right=createtree(inorder,atind+1,inend,postorder,poststart+left,postend-1);
        return root;
    }
};