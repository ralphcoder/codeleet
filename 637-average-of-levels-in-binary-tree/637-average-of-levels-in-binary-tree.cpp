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
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double>ans;
        queue<TreeNode*>a;
        a.push(root);
        while(!a.empty()){
            int size=a.size();
            double b=0.0;
            for(int i=0;i<size;i++){
                TreeNode* node=a.front();
                a.pop();
                b+=node->val;
                if(node->left!=NULL)a.push(node->left);
                if(node->right!=NULL)a.push(node->right);
            }
 
            ans.push_back(b/(size*1.00000));
        }
        return ans;
    }
};