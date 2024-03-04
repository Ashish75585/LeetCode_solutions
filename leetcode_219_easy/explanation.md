Problem-219, "Contain Duplicates II" is an extended version of "Contain Duplicates".
The solution I've provided is the optimal one.
Explanation is as follows:
1. `unordered_map` is used to store the element's value as `key` and it's index as `value`.
2. `for` loop is used to iterate over the elements.
3. ```
   if(mp.find(nums[i]) != mp.end())
   ```
   the above condition is used to check whether the element is repeated or not.
4. If the `number` is repeating itself, then we will compare the difference of their indices with `k`.
5. If the difference is `less than or equal` to `k`, then simply return `true`.
6. Else, if the difference is greater than `k`, then we will update the `index` with `current index` for the same element.
7. The above steps keeps repeating until the `fo`r loop ends.
8. After the `for` loop, if there is no elements which fulfills the conditions then simply return `false`.

9. Time Complexity: O(n)
10. Space Complexity: O(n).


The `brute force` uses the nested `for` loops, and the time complexity we get is `O(nlogn)`
