/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool tell(TreeNode *a, int b){
     if(a->left == NULL && a->right == NULL)
     return (b==a->val);
     
     bool ans;
     if(a->left)
     ans = tell(a->left, b - a->val);
     if(a->right)
     ans =ans || tell(a->right, b - a->val);
     return ans;
     
 }
int Solution::hasPathSum(TreeNode* a, int b) {
    if(a == NULL)
    return false;
    if(a->left==NULL && a->right==NULL){
        if(a->val == b)
        return 1;
        return 0;
    }
    if(tell(a,b))
    return 1;
    return 0;
}

