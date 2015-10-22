/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 map<int,int>p3a;
 int ind(vector<int> &in,int low,int high){
     int inn = low;
     int max = p3a[in[low]];
     for(int i=low+1; i<=high;i++){
         if(p3a[in[i]]>max){
             max = p3a[in[i]];
             inn = i;
         }
         
     }//cout<<low<<" "<<high<<" "<<inn<<"\n";
     return inn;
 }
 TreeNode* tell(vector<int> &in, int low,int high){
     if(low>high)
     return NULL;
     int innd = ind(in,low,high);
     TreeNode* root = new TreeNode(in[innd]);
     if(low==high)return root;
     root->left = tell(in,low,innd-1);
     root->right = tell(in,innd+1,high);
     return root;
     
 }
TreeNode* Solution::buildTree(vector<int> &in, vector<int> &post) {
    if(post.size()==0)
    return NULL;
    p3a.clear();
    for(int i=0;i<post.size();i++)
    p3a[post[i]]=i;
    return (tell(in,0,in.size()-1));
}

