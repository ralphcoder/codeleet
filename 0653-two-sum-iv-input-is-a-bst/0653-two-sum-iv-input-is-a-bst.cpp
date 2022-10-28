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
   bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorder(root, nums);//stored all element in sorted order in nums
        for(int i = 0, j = nums.size()-1; i<j;){//using two pointers i and j to traverse from both end
            if(nums[i] + nums[j] == k)return true;//if got sum return ture
            (nums[i] + nums[j] < k)? i++ : j--;//if the sum is smaller we increase the smaller no by 1 , if the sum is greater we decrease the greater no by 1.
        }
        return false;
    }
    
    void inorder(TreeNode* root, vector<int>& nums){
        if(root == NULL)return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
};