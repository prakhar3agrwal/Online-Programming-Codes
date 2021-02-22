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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode dummy = new ListNode();
        dummy.next = list1;
        ListNode temp = dummy;
        ListNode aPointer=null, bPointer=null;
        int i=0;
        while(temp.next!=null){
            if(i == a){
                aPointer = temp;
            }
            if(i == b){
                bPointer = temp.next.next;
                break;
            }
            temp = temp.next;
            i++;
        }
        aPointer.next = list2;
        ListNode list2End = list2;
        while(list2End.next!=null){
            list2End = list2End.next;
        }
        list2End.next = bPointer;
        return dummy.next;
    }
}
