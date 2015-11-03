/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* a, int b) {
    int i,j,k;
    ListNode *curr, *pre, *z;
    curr = pre = z = a;
    if(a == NULL)
    return a;

    for(i=1; i<b; i++){
        curr = curr->next;
        if(curr == NULL){
            a = a->next;
            return a;
        }
    }
    if(curr->next == NULL){
        a = a->next;
        return a;
    }
    while(curr->next != NULL){
        curr = curr->next;
        pre = z;
        z = z->next;
    }
    pre->next = z->next;
    return a;
}

