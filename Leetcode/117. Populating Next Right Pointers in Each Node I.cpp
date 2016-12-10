/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:

  map<int, TreeLinkNode*> p3a;
    void inorder(TreeLinkNode *root, int row){
        if(root == NULL)
        return;
        root->next = NULL;
        if(p3a[row] == 0){
            p3a[row] = root;
        }else{
            p3a[row]->next = root;
            p3a[row] = root;
        }
        
        inorder(root->left, row+1);
        inorder(root->right, row+1);
    }
    void connect(TreeLinkNode *root) {
        inorder(root,0);
    }
};