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
    public ListNode deleteDuplicates(ListNode head) {
        if(null == head || null == head.next){
            return head;
        }
        ListNode newHead = new ListNode();
        newHead.next = head;
        ListNode temp = newHead;
        while(temp.next != null && temp.next.next !=null){
            if(temp.next.val == temp.next.next.val){
                ListNode localTemp = temp.next;
                int val = localTemp.next.val;
                while(localTemp!=null && localTemp.val == val){
                    localTemp = localTemp.next;
                }
                temp.next = localTemp;
            }else{
             temp = temp.next;    
            }
            
        }
        return newHead.next;
        
    }
}
