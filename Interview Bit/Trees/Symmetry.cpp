/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool tell(TreeNode *a, TreeNode *b){
     if(a == NULL && b == NULL)
     return true;
     if(a== NULL || b==NULL)
     return false;
     return( tell(a->left, b->right) && tell(a->right, b->left) && (a->val == b->val));
 }
int Solution::isSymmetric(TreeNode* a) {
    if(a == NULL || (a->left == NULL && a->right == NULL))
    return 1;
    if(a->left == NULL || a->right == NULL)
    return 0;
    if(tell(a->left, a->right))
    return 1;
    return 0;
}

