/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *temp=head;
        if(head==NULL)
        return head;
        while(temp->next!=NULL)
        {
            if(temp->val==temp->next->val)
            temp->next=temp->next->next;
            else
            temp=temp->next;
        }
        return head;
    }
};
