// LeetCode: https://leetcode.com/problems/reverse-linked-list/description/

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
    public ListNode reverseList(ListNode head) 
    {
        ListNode curr = head ; 
        ListNode prev = null ; ListNode last = null ;

        while(curr != null)
        {
            last = prev ;  prev = curr ;

            curr = curr.next ;

            prev.next = last ;
        }    

        return prev ;
    }
}

// Time Complexity:  O(N)
// Space Complexity: O(1)
