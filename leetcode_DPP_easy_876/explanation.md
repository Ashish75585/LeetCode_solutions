# Daily Challenge: Middle of the Linked List 🏆

### Level: Easy

Welcome to today's challenge! Here, we'll tackle the problem of finding the middle node of a linked list.

## Given Data:
- `head` of the LinkedList. 📝

## Objective:
Our goal is simple: find and return the `middle` node of the linked list. 🔄❓

## Solution:

### 1. Brute Force
The brute force approach is quite straightforward:
1. **Counting Nodes:** First, we count the number of nodes in the linked list. This operation takes O(n) time, where n is the number of nodes.
2. **Finding the Middle:** Once we have the count, we divide it by 2. If there are two centers, we return the 2nd center. This operation also takes O(n) time.

Time Complexity: O(n)

### 2. Optimal Solution
For an optimal solution, we'll use the concept of `two pointers`:
1. **Initialization:** We initialize two pointers, `p` and `q`, both starting from the head of the linked list. This operation takes O(1) time.
2. **Traversal:** `p` moves twice as fast as `q`. So, in each iteration, `p` moves two nodes ahead while `q` moves one node ahead. This traversal takes O(n/2) time, which simplifies to O(n).
3. **Middle Node:** When `p` reaches the end (i.e., becomes `null`), `q` will be at the middle node. This operation also takes O(1) time.
4. **Return:** We simply return the node pointed to by `q`. This operation is constant time.

Time Complexity: O(n)

By using this optimal solution, we can find the middle node of the linked list efficiently.
