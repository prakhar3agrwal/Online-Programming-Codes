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
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(null == l1){
            return l2;
        }
        if(null == l2){
            return l1;
        }
        ListNode head = new ListNode();
        ListNode tempHead = head;
        while(l1!=null && l2!=null){
            if(l1.val<l2.val){
                tempHead.next = l1;
                l1 = l1.next;
            }else{
                tempHead.next = l2;
                l2 = l2.next;
            }
            tempHead = tempHead.next;
        }
        tempHead.next = l1 == null ?l2:l1;
        return head.next;
    }
}
