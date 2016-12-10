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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > ans;
        
        if(root == NULL)
        return ans;
        vector<int> temp;
        queue<TreeNode *>q;
        int ct = 0;
        q.push(root);
        while(!q.empty()){
            ct = q.size();
            temp.clear();
            while(ct--){
                TreeNode *x = q.front();
                temp.push_back(x->val);
                if(x->left)
                q.push(x->left);
                if(x->right)
                q.push(x->right);
                q.pop();
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};