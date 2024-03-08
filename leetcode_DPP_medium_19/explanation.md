# Daily Challenge: Remove Nth Node From End Of List 🏆

### Level: Medium

In this problem, we have to delete the nth node from the end of a LinkedList.

## Given Data:
1. `head` of LinkedList.
2. `n` with an integer value.

## Objective:
Delete the Nth Node from the end of the linked list.

## Solution:

1. 🔍 **Using Brute Force:**
   - 
   1. *First, Reverse the LinkedList.*
   2. *Now, it becomes easy to reach out to the nth node from the beginning.*
   3. *After Deleting the nth node, reverse the linked list again to restore its original form.*

2. 🚀 **Optimal Solution**:
   - 
   The optimal solution avoids reversing the linked list.
    1. Create a `dummy` node and assign it with value `0` and make it point to the `head` node.
    2. Create two pointers `first` and `second` and make them point to the `dummy` node.
    3. Use a `for` loop to move the pointer `first` forward `n+1` times. This positions the `first` pointer at the `(n+1)th` node from the start.
    4. Now, use a `while` loop to move both the pointers, `first` and `second`, by one node until `first` reaches `null`.
    5. The `second` pointer will end up at the `n+1` node from the end.
    6. Use a temporary pointer `temp` and point it to `second->next`.
    7. Assign `second->next` to `temp->next`, effectively skipping the `nth` node from the end.
    8. Delete the node at which `temp` was pointing.

This solution efficiently removes the nth node from the end of the linked list without requiring a reversal of the entire list.

   
   

         


