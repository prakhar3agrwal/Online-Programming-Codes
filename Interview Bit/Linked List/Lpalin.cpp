/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* a) {
    if(a == NULL)
    return 1;
    ListNode *temp = a;
    string x = "";
    while(temp != NULL){
        x += char(temp->val);
        temp = temp->next;
    }
    string y = x;
    for(int i=0;i<y.length()/2;i++)
    swap(y[i], y[y.length()-1-i]);
    if(x == y)
    return 1;
    return 0;
}

