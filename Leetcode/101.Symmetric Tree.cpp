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
    
    bool tell (TreeNode* a, TreeNode* b){
        if(a==NULL && b==NULL)
        return true;
        
        if(a==NULL || b==NULL)
        return false;
        
        return ((a->val==b->val) && (tell(a->left,b->right)) && (tell(a->right,b->left)));
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
        return true;
        
        return (tell (root->left, root->right));
    }
};