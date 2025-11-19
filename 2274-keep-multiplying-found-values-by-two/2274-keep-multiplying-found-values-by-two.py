class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        nums = set(nums)

        while original in nums:
            original = 2 * original
        
        return original
        