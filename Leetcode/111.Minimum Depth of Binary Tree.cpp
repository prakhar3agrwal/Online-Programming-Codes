/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int depth(TreeNode *root){
        if(root == NULL)
        return 0;
        
        int l = 10000000;
        int r = 10000000;
        if(root->left)
            l = depth(root->left);
        
        if(root->right)
            r = depth(root->right);
            
        if(l == 10000000 && r == 10000000)
        return 1;
        else return (min(l,r)+1);
    }
    int minDepth(TreeNode *root) {
        return depth(root);
    }
};