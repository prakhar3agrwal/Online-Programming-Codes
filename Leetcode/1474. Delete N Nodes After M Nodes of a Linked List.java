/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteNodes(ListNode head, int m, int n) {
        if(head == null){
            return head;
        }
        ListNode curr = head;
        ListNode last = head;
        while(curr !=null){
            int tempM =m;
            int tempN = n;
            
            while(tempM > 0 && curr !=null){
                tempM--;
                last = curr;
                curr=curr.next;
            }

            while(tempN > 0 && curr !=null){
                curr = curr.next;
                tempN--;
            }
            last.next = curr;
        }
        return head;
    }
}
