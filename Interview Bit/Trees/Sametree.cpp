/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool tell(TreeNode* a, TreeNode* b){
     if(a == NULL && b== NULL)
     return true;
     if(a == NULL || b == NULL)
     return false;
     return( tell(a->left,b->left) && tell(a->right, b->right) && (a->val == b->val));
     
 }
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(tell(A,B))
    return 1;
    return 0;
}

