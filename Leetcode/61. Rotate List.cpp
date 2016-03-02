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
    ListNode *rotateRight(ListNode *head, int k) {
        int i,j;
        if(head==NULL)
        return head;
        ListNode *x,*y;
        x=y=head;
        j=0;
        while(x!=NULL)
        {
            j++;
            x=x->next;
        }
        k=k%j;
        x=head;
        i=0;
        while(i<k && y!=NULL)
        {
            i++;
            y=y->next;
        }
        if(y==NULL)
        return head;
        while(y->next!=NULL)
        {
            y=y->next;
            x=x->next;
        }
        y->next=head;
        head=x->next;
        x->next=NULL;
        
        return head;
    }
};
