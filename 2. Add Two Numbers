# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        result = ListNode(0)
        curr = result
        
        tmp = 0
        pre_node = curr
        while(not l1 == None or not l2 == None):
            if l1 == None:
                tmp = l2.val + tmp
            elif l2 == None:
                tmp = l1.val + tmp
            else:
                tmp = l1.val + l2.val + tmp
            
            curr.val = tmp % 10
            curr.next = ListNode(0)
            pre_node = curr
            curr = curr.next
            
            tmp = tmp // 10
            
            if not l1 == None:
                l1 = l1.next
            if not l2 == None:
                l2 = l2.next
            
        if tmp == 1:
                curr.val = 1
        else:
            pre_node.next = None
        return result