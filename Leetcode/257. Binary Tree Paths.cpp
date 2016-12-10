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
    
    bool isLeaf(TreeNode *root){
        if(root->left == NULL && root->right == NULL)
        return true;
        
        return false;
    }
    
    void addString(vector<string>&ans, vector<int>vals, int index){
        string temp = "";
        temp += to_string(vals[0]);
        for(int i = 1;i<index;i++){
            temp += "->";
            temp += to_string(vals[i]);    
        }
        ans.push_back(temp);
    }
    
    void dfs(TreeNode *root, vector<string>&ans, vector<int>vals, int index){
        if(root == NULL)
        return;
        if(isLeaf(root)){
            if(vals.size()<index)
            vals.push_back(root->val);
            else
            vals[index] = root->val;
            addString(ans,vals,index);
            return;
        }
        vals.push_back(root->val);
        dfs(root->left, ans,vals,index+1);
        dfs(root->right, ans,vals,index+1);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root == NULL)
        return ans;
        vector<int>temp;
        dfs(root,ans,temp, 1);
        return ans;
    }
};