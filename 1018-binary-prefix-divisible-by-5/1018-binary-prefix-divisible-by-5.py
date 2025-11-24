class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        val = 0
        result = []

        for bit in nums:
            val = (val * 2 + int(bit)) % 5
            result.append(val == 0)
        return result
        