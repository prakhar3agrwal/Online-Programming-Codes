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
    bool solve(TreeNode *root, int* height){
        if(root == NULL)
        return true;
        
        int lh = 0;
        int rh = 0;
        
        bool lb = solve(root->left,&lh);
        bool rb = solve(root->right,&rh);
        
        *height = max(lh,rh) + 1;
        
        return (lb && rb && abs(lh-rh)<=1);
        
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        return true;
        
        int ht = 0;
        return solve(root,&ht);
    }
};