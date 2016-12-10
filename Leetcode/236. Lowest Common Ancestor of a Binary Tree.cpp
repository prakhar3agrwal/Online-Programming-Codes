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
    
    bool path(TreeNode *root, TreeNode *dest, vector<TreeNode *> *route){
        if(root == NULL)
        return false;
        
        if(root == dest){
            (*route).push_back(root);
            return true;
        }
        if(path(root->left, dest, route) == true){
            (*route).push_back(root);
            return true;
        }
        
        if(path(root->right, dest, route) == true){
            (*route).push_back(root);
            return true;
        }
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || p == NULL || q == NULL)
        return NULL;
        
        vector<TreeNode *> p1,p2;
        path(root, p, &p1);
        path(root, q, &p2);
        
        int i,j;
        i = p1.size()-1;
        j = p2.size()-1;
        while(i>=0 && j>=0){
            if(p1[i] != p2[j])
            break;
            i--;
            j--;
        }
        return p1[i+1];
    }
};