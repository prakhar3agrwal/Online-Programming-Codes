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
    map<int,int>p3a;
    map<int,int>::iterator it;
    void inorder(TreeNode* root, int row){
        if(root != NULL){
            inorder(root->left, row+1);
            it = p3a.find(row);
            if(it != p3a.end())
                p3a[row] = max(root->val, p3a[row]);
            else p3a[row] = root->val;
            inorder(root->right, row+1);
        }
    }
    vector<int> largestValues(TreeNode* root) {
        inorder(root,0);
        vector<int>ans;
        for(it=p3a.begin();it!=p3a.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};