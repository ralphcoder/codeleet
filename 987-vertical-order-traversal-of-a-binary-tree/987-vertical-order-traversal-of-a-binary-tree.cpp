class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>>ans;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int vertical=it.second.first;
            int level=it.second.second;
            if(it.first->left!=NULL)q.push({it.first->left,{vertical-1,level+1}});
            if(it.first->right!=NULL)q.push({it.first->right,{vertical+1,level+1}});
            nodes[vertical][level].insert(it.first->val);
        }
            for(auto p:nodes){
                vector<int>temp;
                for(auto i:p.second){
                   temp.insert(temp.end(),i.second.begin(),i.second.end());
                }
                ans.push_back(temp);
            }
        return ans;
    }
};