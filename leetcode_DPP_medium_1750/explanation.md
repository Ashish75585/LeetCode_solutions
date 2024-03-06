# Daily Challenge: Minimum Length of String After Deleting Similar Ends 📉

### Level: Medium

In this problem, we have to find the minimum length of a string after deleting the same prefix and suffix.

## Solution:

1. 🔍 **Set Pointers:** Initialize the variables `front` and `end` pointing at `string[0]` and `string[n]`, respectively, where `n` is the size-1 of `string`.

2. 📝 **Store Prefix and Suffix:** Use two variables, `prefix` and `suffix`, to temporarily store the prefix and suffix characters of the string `s`.

3. 🔄 **Iterate Through String:** Utilize a `while` loop for iteration over the `string` with the condition `front <= end`.

4. ⚙️ **Main Logic:** Inside the loop:
   - If the `prefix` is not equal to `suffix` or the length of the string is `1`, then `break` out of the loop.
   - If the `prefix` or `s[front]` is equal to the `suffix`, increment `front` by `1`.
   - Similarly, if the `suffix` or `s[end]` is equal to the `prefix`, decrement `end` by `1`.
   - After deletion, refresh the value of `prefix` and `suffix` if they are the same.
   - Otherwise, simply `break` out of the loop.
     
6. 🔢 **Calculate Minimum Length:** The minimum length can be calculated by `end - front + 1`.

