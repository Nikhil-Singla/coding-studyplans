# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head.next == None:
            return None

        tort = head
        rabbit = head
        prev = tort

        while(rabbit and rabbit.next):
            prev, tort, rabbit = tort, tort.next, rabbit.next.next

        prev.next = tort.next

        return head
