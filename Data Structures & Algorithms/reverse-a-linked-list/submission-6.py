# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def RecRev(prev, curr):
            if not curr:
                return prev
            newHead = RecRev(curr, curr.next)
            curr.next = prev
            return newHead # new head trickles back up from the base case
        
        return RecRev(None, head)


        