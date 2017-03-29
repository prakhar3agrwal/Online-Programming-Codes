/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void solve(TreeNode *root, int &k, int &ans){
     if(root && k !=0){
         solve(root->left, k, ans);
         k--;
         if(k==0){
          ans = root->val;   
         }
         solve(root->right,k,ans);
     }
 }
int Solution::kthsmallest(TreeNode* root, int k) {
    if(root == NULL)
    return 0;
    int ans = -1;
    solve(root, k, ans);
    return ans;
}
