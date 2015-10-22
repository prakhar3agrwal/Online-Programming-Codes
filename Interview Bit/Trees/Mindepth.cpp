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
    
    int ans = 0, n =0;
    if(a->left)
    ans = tell(a->left);
    if(a->right)
    n = tell(a->right);
    if(n==0 && ans==0)
    return 1;
    if(n==0)
    return ans+1;
    if(ans==0)
    return n+1;
    return min(n,ans) + 1;
}
int Solution::minDepth(TreeNode* a) {
    if(a==NULL)
    return 0;
    return tell(a);
}

