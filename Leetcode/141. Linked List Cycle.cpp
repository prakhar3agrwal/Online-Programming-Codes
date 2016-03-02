/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include<map>
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode *,bool>p3a;
        ListNode *t=head;
        while(t)
        {
            if(p3a[t])
            return true;
            p3a[t]=1;
            t=t->next;
        }
        return false;
    }
};
