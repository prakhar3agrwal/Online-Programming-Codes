/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int arr1[600005], arr2[600005],x,y;
 int tell(TreeNode *a, int v,int ind){
     if(a==NULL)
     return -1;
     if(a->val == v){
         arr1[ind] = a->val;
         x=ind;//cout<<x<<" "<<ind<<"haha";
         return ind;
     }
     arr1[ind] = a->val;
     if(a->left){
        int ans = tell(a->left, v, ind+1);
        if(ans !=-1)
        return ans;
     }
    if(a->right){
        int ans = tell(a->right, v, ind+1);
        if(ans !=-1)
        return ans;
     }
     return -1;
 }
  int tell2(TreeNode *a, int v,int ind){
     if(a==NULL)
     return -1;
     if(a->val == v){
         arr2[ind] = a->val;
         y=ind;
         return ind;
     }
     arr2[ind] = a->val;
     if(a->left){
        int ans = tell2(a->left, v, ind+1);
        if(ans !=-1)
        return ans;
     }
    if(a->right){
        int ans = tell2(a->right, v, ind+1);
        if(ans !=-1)
        return ans;
     }
     return -1;
 }
int Solution::lca(TreeNode* a, int v1, int v2) {
    if(a==NULL)
    return -1;
    int x1=tell(a,v1,0); 
    if(x1 == -1)
    return -1;
   int  y1 = tell2(a,v2,0);
    if(y1==-1)
    return -1;
    int i;
    for(i=0;i<=min(x,y);i++)
    if(arr1[i]!=arr2[i]){
        return arr1[i-1];
    }
    if(i==min(x,y)+1)
    {
        if(x<y)
        return arr1[x];
        return arr2[y];
    }
    
}

