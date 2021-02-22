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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode newHead = new ListNode();
        newHead.next = head;
        ListNode end = newHead;
        ListNode start = newHead;
        for(int i=0;i<n;i++){
            end = end.next;
        }
        while(end.next!=null){
            start = start.next;
            end = end.next;
        }
        start.next = start.next.next;
        return newHead.next;
    }
}