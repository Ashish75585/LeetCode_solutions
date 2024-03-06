# Daily Challenge: Linked List Cycle 🏆

### Level: Easy

In this problem, we're going to solve the mystery of whether a given linked list has a loop or not. 🕵️‍♂️

## Given Data:
1. `head` of LinkedList. 📝

## Objective:
To determine if the given linked list has a loop. 🔄❓

## Solution:
1. **Initialize Pointers:** 
    - We start our investigation with two trusty pointers, `head` and `tail`, both starting from the head of the linked list. 
2. **Move Pointers:**
    1. `head` moves forward by `one` node at a time.
    2. `tail` moves forward by `one` node at a time as well.
    3. To avoid accessing `NULL` pointers, `head` is moved forward again inside the loop. 
3. **Check for Cycle:**
    - If at any point `head` catches up to `tail`, it indicates the presence of a cycle, and the function returns `true`. 
4. **Return Result:**
    - If the loop completes without `head` catching `tail`, meaning there is no cycle, and the function returns `false`. 

