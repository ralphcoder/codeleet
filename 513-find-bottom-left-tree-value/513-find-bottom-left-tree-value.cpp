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
    int ans=0;
    int findBottomLeftValue(TreeNode* root) {
        int ma=1;
        ans=root->val;
        recur(root,0,ma);
        return ans;
    }
    void recur(TreeNode* root,int level,int &ma){
        if(root==NULL)return;
        if(level==ma){ans=root->val;ma++;}
        recur(root->left,level+1,ma);
        recur(root->right,level+1,ma);
    }
};