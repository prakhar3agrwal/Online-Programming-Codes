/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int getMaxIndex(vector<int>&a,int l,int r){
    int v=a[l],in=l;
    for(int i=l+1;i<=r;i++)
    if(a[i]>v){
        v=a[i];
        in=i;
    }
    return in;
}
TreeNode* getTreeNode(int value){
    TreeNode* x = new TreeNode(value);
    x->val = value;
    x->left = x->right = NULL;
    return x;
}
TreeNode* build(vector<int>&a,int l,int r){
    
    int maxValInd = getMaxIndex(a,l,r);
    TreeNode* root = new TreeNode(a[maxValInd]);
    
    if(l<maxValInd)
    root->left = build(a,l,maxValInd-1);
    if(r>maxValInd)
    root->right = build(a,maxValInd+1, r);
    return root;
    
 }
TreeNode* Solution::buildTree(vector<int> &a) {
    if(a.size() == 0)
    return NULL;
    return build(a,0,a.size()-1);
}

