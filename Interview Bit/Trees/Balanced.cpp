/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool ans = true;
 int tell(TreeNode *a){
    if(a->left==NULL && a->right == NULL)
    return 1;
    
    int l = 0, r= 0;
    if(a->left)
    l = tell(a->left);
    if(a->right)
    r = tell(a->right);
    ans = ans & (abs(l-r)<=1);
    return max(l,r) + 1;
}
int Solution::isBalanced(TreeNode* a) {
    ans =true;
    if(a==NULL)
    return 1;
    tell(a);
    if(ans)
    return 1;
    return 0;
    
}

