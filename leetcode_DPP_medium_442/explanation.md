# Problem: Find All Duplicates in an Array 🏆

### Level: Medium
### Date: 25/03/2024

In this problem, we have to find all the integers having duplicates present in an Array.

## Given Data:
1. Array of integers named `nums`.
2. All the Integers lie within `1` to `n`.

## Solution:
### Approach-1: Using Hash table.

1. Count the `frequency` of each element and store it into the `hash` table.
2. Now iterate through the `hash` table and store the `key` into an array `ans`, whose value is greater than `1`.
3. Now simply return the arrayc`ans`.

   
**Time Complexity:** O(n).  
**Space Complexity:** O(n).

### Approach-2: Utilizing Integer Range for Duplicate Identification.
1. We will take the advantage of the given `condition` to identify the duplicates.
2. As we did in first approach, initialize a vector `ans` to store the `duplicates`.
3. Initialize a loop.  
    - `iterate` through the array take the `absolute` value, means only `magnitude` and store it into variable say `x`.
    - Now again check the value of `nums[x-1]`, whether it is `negative` or not. (x-1, because the `index` is starting from `0`)
    - If the value is `negative`, means that value stored in `x` is repeated. Store that value in array `ans`.
    - If the value is non-negative, then multiply that value with `-1` to make it `negative`.
4. Return the `ans`.


**Time Complexity:** O(n).  
**Space Complexity:** O(1).


         
