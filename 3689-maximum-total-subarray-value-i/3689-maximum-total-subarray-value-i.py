class Solution:
    def maxTotalValue(self, nums: List[int], k: int) -> int:
        max_value = 0
        min_value = float('inf')

        for nums in nums:
            max_value = max(max_value, nums)
            min_value = min(min_value, nums)
        
# In this either going with the addition to the max and min value we can multipy with k

        return k * (max_value - min_value)