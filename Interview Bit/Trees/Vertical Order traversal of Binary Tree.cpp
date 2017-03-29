/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 vector<vector<int> > tell(TreeNode* a){
     pair<TreeNode*, int> pr;
     queue< pair<TreeNode*, int> > q;
     q.push(make_pair(a,0));
     map<int, vector<int> > p3a;
     map<int, vector<int> >::iterator it;
     while(!q.empty()){
         pr = q.front();
         q.pop();
         int x = (pr.second);
         if((pr.first)->left){
             q.push(make_pair((pr.first)->left, x-1));
         }
         if((pr.first)->right){
             q.push(make_pair((pr.first)->right, x+1));
         }
         it = p3a.find(x);
         if(it != p3a.end()){
             p3a[x].push_back((pr.first)->val);
         }else{
             vector<int>temp;
             temp.push_back((pr.first)->val);
             p3a[x] = temp;
         }
     }
     vector<vector<int> >  ans;
     for(it=p3a.begin();it!=p3a.end();it++){
         ans.push_back(it->second);
     }
     return ans;
 }
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* a) {
    vector<vector<int> >  ans;
    if(a == NULL)
    return ans;
    return tell(a);
}
