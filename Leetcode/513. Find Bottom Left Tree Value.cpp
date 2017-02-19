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
        void preorder(TreeNode* root, int row, int &maxRow, int &maxVal){
            if(root != NULL){
                //cout << row << " "<< maxRow<<" "<< maxVal<< endl;
                if(row > maxRow){
                  maxVal = root->val;
                  maxRow = row;
                }
                preorder(root->left, row+1, maxRow, maxVal);
                preorder(root->right, row+1, maxRow, maxVal);
            }
        }
    
    int findBottomLeftValue(TreeNode* root) {
        int ans = root->val;
        int maxRow = 0;
        preorder(root, 0,maxRow,ans);
        return ans;
    }
};