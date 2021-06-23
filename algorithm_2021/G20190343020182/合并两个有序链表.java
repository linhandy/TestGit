/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
    	if (l1 == null) {
    		return l2;
    	}
    	
    	if (l2 == null) {
    		return l1;
    	}
    	
    	ListNode p = l1;
    	ListNode q = l2;
    	ListNode r = null;
    	ListNode result = null;
    	while ((p != null) || (q != null)) {
    		ListNode tmpNode = null;
    		if (p != null && q != null) {
    			if (p.val <= q.val) {
    				tmpNode = new ListNode(p.val);
    				p = p.next;
    			}
    			else {
    				tmpNode = new ListNode(q.val);
    				q = q.next;
    			}
    			if (r == null) {
    				result = r = tmpNode;
    			}
    			else {
    				r.next = tmpNode;
    				r = r.next;
    			}
    		}
    		else if (p != null)
    		{
    			r.next = tmpNode = new ListNode(p.val);
    			r = r.next;
    			p = p.next;
    			
    		}
    		else if (q != null) {
    			r.next = tmpNode = new ListNode(q.val);
    			r = r.next;
    			q = q.next;
    		}
    	}
    	
		return result;
	}
}