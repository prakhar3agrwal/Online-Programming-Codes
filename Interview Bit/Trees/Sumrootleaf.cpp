/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
         int sumNumbers1(TreeNode *root, int curSum) {
            if (root == NULL) return curSum;
            curSum = (curSum * 10 + root->val) % 1003;
            if (root->left == NULL && root->right == NULL) return curSum;
            if (!root->left) return sumNumbers1(root->right, curSum);
            if (!root->right) return sumNumbers1(root->left, curSum);
            return (sumNumbers1(root->left, curSum) + sumNumbers1(root->right, curSum)) % 1003;
        }
int Solution::sumNumbers(TreeNode* a) {
    return sumNumbers1(a,0);
}

