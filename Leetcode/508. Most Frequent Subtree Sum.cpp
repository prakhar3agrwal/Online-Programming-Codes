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

    map<int, int>p3a;
    map<int, int>::iterator it;
    int postorder(TreeNode* root, int &maxFreq){
        if(root == NULL)
            return 0;
        int left = postorder(root->left, maxFreq);
        int right = postorder(root->right, maxFreq);
        int sum = root->val + left + right;
        p3a[sum]++;
        maxFreq = max(maxFreq, p3a[sum]);
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        int maxFreq = 0;
        postorder(root, maxFreq);
        vector<int> ans;
        for(it = p3a.begin(); it!=p3a.end();it++)
            if(it->second == maxFreq)
                ans.push_back(it->first);
        return ans;
    }
};