/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode *head, *curr1, *curr2, *temp;

    head = temp = NULL;
    if(a == NULL)
    return b;
    if(b == NULL)
    return a;
    while(a != NULL && b != NULL){
        if(a->val <= b->val){
            if(head == NULL){
                head = a;
                temp = head;
            }
            else{
                temp->next = a;
                temp = temp->next;
            }
            a = a->next;
            temp->next = NULL;
        }
        else{
            if(head == NULL){
                head = b;
                temp = head;
            }
            else{
                temp->next = b;
                temp = temp->next;
            }
            b = b->next;
            temp->next = NULL;
        }
    }
    if(a != NULL)
    temp->next = a;
    if(b != NULL)
    temp->next = b;
    return head;
}

