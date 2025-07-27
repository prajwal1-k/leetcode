# Approach

The approach is to have two pointers, i and j, where i iterates through the array and j keeps track of the last element that is not equal to the current element i. By doing this, we skip over the equal elements because they don't help in determining a new hill or valley but are part of an existing one.

During each iteration, we compare nums[i] with nums[j] and nums[i+1]:

- If **nums[i] > nums[j] and nums[i] > nums[i+1]**, it means that nums[i] is a hill. We increment the answer counter.
- If **nums[i] < nums[j] and nums[i] < nums[i+1]**, it means that nums[i] is a valley. We increment the answer counter as well.
- If **nums[i] is equal to nums[i+1]**, we continue the iteration without changing j because we're still within the same hill or valley region.
