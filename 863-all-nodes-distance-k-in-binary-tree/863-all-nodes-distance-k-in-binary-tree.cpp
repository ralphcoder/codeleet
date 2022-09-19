/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void parents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&child){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left){child[temp->left]=temp;q.push(temp->left);}
            if(temp->right){child[temp->right]=temp;q.push(temp->right);}
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>child;
        parents(root, child);
        unordered_map<TreeNode*, bool>visited;
        visited[target]=true;
        queue<TreeNode*>q;
        q.push(target);
        int level=0;
        while(!q.empty()){
            int s=q.size();
            if(level++==k)break;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    visited[curr->left]=true;
                    q.push(curr->left);
                }
                if(curr->right && !visited[curr->right]){
                    visited[curr->right]=true;
                    q.push(curr->right);
                }
                if(child[curr]&& !visited[child[curr]]){
                    visited[child[curr]]=true;
                    q.push(child[curr]);
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};