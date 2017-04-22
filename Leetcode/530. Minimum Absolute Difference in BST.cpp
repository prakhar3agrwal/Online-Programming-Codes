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
    void postorder(TreeNode* root, int *ans, int *minVal, int *maxVal){
        if(root){
            int leftMin, leftMax, rightMin, rightMax;
            leftMin = rightMin = INT_MAX;
            leftMax = rightMax = INT_MIN;
            postorder(root->left, ans, &leftMin, &leftMax);
            postorder(root->right, ans, &rightMin, &rightMax);
            if(INT_MIN != leftMax)
                *ans = min(*ans, abs(leftMax - root->val));
            if(INT_MAX != rightMin)
                *ans = min(*ans, abs(rightMin - root->val));
            *minVal = min(root->val,leftMin);
            *maxVal = max(root->val,rightMax);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        int defaultMinValue = INT_MAX;
        int *ans = &defaultMinValue;
        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        postorder(root, ans, &minVal, &maxVal);
        return *ans;
    }
};