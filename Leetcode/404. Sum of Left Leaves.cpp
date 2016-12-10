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
    bool isLeaf(TreeNode *root){
        if(root == NULL)
        return false;
        if(root->left == NULL && root->right == NULL)
        return true;
        return false;
    }
    
    int solve(TreeNode *root){
        if(root == NULL)
        return 0;
        int temp = 0;
        if(isLeaf(root->left))
        temp = root->left->val;
        else temp = solve(root->left);
        temp += solve(root->right);
        return temp;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL || isLeaf(root))
        return 0;
        return solve(root);
    }
};