# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
import math
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        while curr and curr.next:
            gcd_val = math.gcd(curr.val, curr.next.val)
            new_node = ListNode(gcd_val)
            
            # Insert new_node between curr and curr.next
            new_node.next = curr.next
            curr.next = new_node
            
            # Move to the node after the inserted one
            curr = new_node.next
        
        return head
