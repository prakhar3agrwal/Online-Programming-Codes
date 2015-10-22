/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* build(const vector<int>&a,int l,int r){
    
    int maxValInd = (l+r)/2;
    TreeNode* root = new TreeNode(a[maxValInd]);
    
    if(l<maxValInd)
    root->left = build(a,l,maxValInd-1);
    if(r>maxValInd)
    root->right = build(a,maxValInd+1, r);
    return root;
    
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &a) {
        if(a.size() == 0)
        return NULL;
        return build(a,0,a.size()-1);
}

