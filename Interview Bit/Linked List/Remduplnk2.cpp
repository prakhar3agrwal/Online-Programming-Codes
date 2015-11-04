/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* a) {
    if(a == NULL || a->next == NULL)
    return a;
    ListNode *head, *curr, *temp;
    head = temp =  NULL; curr = a;
    
    while(curr != NULL){
        if(curr->next == NULL){
            if(head == NULL)
            head = curr;
            else
            temp->next = curr;
            temp = curr;
            return head;
        }
        else{
            if(curr->val == curr->next->val){
                int x = curr->val;
                while(curr != NULL){
                    if(curr->val != x)
                    break;
                    curr = curr->next;
                }
            }
            else{
                if(head == NULL){
                    head = curr;
                    temp = head;
                }
                else{
                    temp->next = curr;
                    temp = temp->next;
                }
                
                curr = curr->next;
                temp->next = NULL;
            }
        }
    }
    return head;
    
}

