/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<vector <int > >ans;

 vector<vector<int> > tell(TreeNode* a){
     pair<TreeNode*, int> pr;
     stack< pair<TreeNode*, int> > s1,s2;
     s1.push(make_pair(a,0));
     map<int, vector<int> > p3a;
     map<int, vector<int> >::iterator it;
     while(!s1.empty() || !s2.empty()){
         
         while(!s1.empty()){
            pr = s1.top();
            s1.pop();
            int x = (pr.second);
            if((pr.first)->left){
                s2.push(make_pair((pr.first)->left, x+1));
                }
            if((pr.first)->right){
                s2.push(make_pair((pr.first)->right, x+1));
                }
            it = p3a.find(x);
            if(it != p3a.end()){
                p3a[x].push_back((pr.first)->val);
            }
            else{
                vector<int>temp;
                temp.push_back((pr.first)->val);
                p3a[x] = temp;
            }
         }
         while(!s2.empty()){
            pr = s2.top();
            s2.pop();
            int x = (pr.second);
            if((pr.first)->right){
                s1.push(make_pair((pr.first)->right, x+1));
                }
                if((pr.first)->left){
                s1.push(make_pair((pr.first)->left, x+1));
                }

            it = p3a.find(x);
            if(it != p3a.end()){
                p3a[x].push_back((pr.first)->val);
            }
            else{
                vector<int>temp;
                temp.push_back((pr.first)->val);
                p3a[x] = temp;
            }
         }
     }
     vector<vector<int> >  ans;
     for(it=p3a.begin();it!=p3a.end();it++){
         ans.push_back(it->second);
     }
     return ans;
 } 
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* a) {
    
    if(a == NULL)
    return ans;
    
    return tell(a);
}
