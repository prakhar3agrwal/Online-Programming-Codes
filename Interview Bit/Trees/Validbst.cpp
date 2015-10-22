/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<int> ans;
 void tell(TreeNode* a){
     if(a){
         tell(a->left);
         ans.push_back(a->val);
         tell(a->right);
     }
 }
int Solution::isValidBST(TreeNode* a) {
    ans.clear();
    tell(a);
    for(int i=1;i<ans.size();i++)
    if(ans[i]<=ans[i-1])
    return 0;
    return 1;
}

