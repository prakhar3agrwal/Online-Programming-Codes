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
    ListNode *swapPairs(ListNode *h) {
        if(h==NULL || h->next==NULL)
        return h;
        ListNode *a,*b,*c;
        c=h;a=h->next;
        while(true)
        {
            
            if(c==h)
            {
               c->next=a->next;
               a->next=c;
               h=a;
               a=c->next;
            }
            else
            {
                c->next=a->next;
                a->next=a->next->next;
                c->next->next=a;
                c=a;
                a=c->next;
            }
            if(a==NULL || a->next==NULL)
            return h;
            
        }
    }
};
