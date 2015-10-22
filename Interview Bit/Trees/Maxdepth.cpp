/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int tell(TreeNode *a){
    if(a->left==NULL && a->right == NULL)
    return 1;
    
    int ans = 0;
    if(a->left)
    ans = tell(a->left);
    if(a->right)
    ans = max(ans, tell(a->right));
    return ans + 1;
}
int Solution::maxDepth(TreeNode* a) {
    if(a==NULL)
    return 0;
    return tell(a);
}

