/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
 void tell(TreeLinkNode* a){
     pair<TreeLinkNode*, int > pr,pr1;
     queue< pair<TreeLinkNode*, int > > q;
     q.push(make_pair(a,1));
     while(!q.empty()){
         pr = q.front();
         q.pop();
         if((pr.first)->left)
         q.push(make_pair((pr.first)->left, (pr.second)+1));
         if((pr.first)->right)
         q.push(make_pair((pr.first)->right, (pr.second)+1));
         if(q.empty())
         (pr.first)->next = NULL;
         else{
             pr1 = q.front();
             if(pr.second == pr1.second)
             (pr.first)->next = pr1.first;
             else
             (pr.first)->next = NULL;
         }
         
     }
 }
void Solution::connect(TreeLinkNode* a) {
    if(a== NULL)
    return;
    tell(a);
    return;
}

