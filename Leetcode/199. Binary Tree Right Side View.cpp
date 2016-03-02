/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    map<int,int>ans;
    map<int,bool>p3a;
    void inorder (TreeNode *root, int row, int col){
        if(root){
            if(p3a[row]==0){
                p3a[row]=1;
                ans[row]=root->val;
            }
        inorder(root->right,row+1,col+1);
        inorder(root->left ,row+1,col-1);
        
            
        }
    }
    vector<int> rightSideView(TreeNode *root) {
        inorder(root,0,0);
        vector<int> vals;
        map<int,int>::iterator it;
        for(it=ans.begin();it!=ans.end();it++){
            vals.push_back(it->second);
        }
        return vals;
    }
};
