# Find All Duplicates in an Array 🏆

### Level: Medium

In this problem, we have to find the maximum possible score.

## Given Data:
1. Array of tokens named `tokens`.
2. `power` with value (int).
3. An initial `score` starting with zero.

## Objective:
Find the maximum `score` using the given `tokens` and `power`.

## Solution:

1. 🔍 **Sort the Array:** At first, we will sort the array `tokens` in ascending order.

2. 🎯 **Set Pointers:** Initialize the variable `front` and `end` pointing at `tokens[0]` and `tokens[n]`, where `n` is the size-1 of `tokens`.

3. 📈 **Track Maximum Score:** Also, a variable `max_score` is there to keep track of the maximum score. Since the variable `score` keeps on changing, that's why we need `max_score`.

4. 🔄 **Iterate through Tokens:** Use a `while` loop for iteration over the `tokens` with condition `front <= end`.

5. ⚙️ **Main Logic:** Inside the loop, first, we will compare power with `tokens[i]`. Since `tokens` is sorted, `tokens[i]` will be the smallest value among all values.
   - If the condition becomes true:
     1. Increase the `score` by `1`.
     2. Decrease the `power` by `tokens[i]`.
     3. Increment the value of `front`.
     4. Update the value of `max_score`.
     
6. 🔄 **Continue or Terminate:** If this condition fails, then check the value of `score`, whether it is greater than zero or not.

7. 📈 **Add Maximum Token Value:** If yes, then add the maximum value present in `tokens`, i.e., `tokens[end]`, and decrement the value of `score` by 1.

8. 🔄 **Move Pointer:** Also, decrement the value of `end`.

9. ⛔ **Break Out:** If both conditions fail, then simply `break` out of the loop and return the `max_score`.

         
