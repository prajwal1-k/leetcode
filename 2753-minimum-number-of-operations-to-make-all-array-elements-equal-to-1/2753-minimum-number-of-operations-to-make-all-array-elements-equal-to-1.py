class Solution:
    def minOperations(self, nums: List[int]) -> int:
        n = len(nums)
        count_one = nums.count(1)

        if count_one > 0:
            return n - count_one
        
        min_len = float('inf')

        for i in range(n):
            g = nums[i]

            for j in range(i + 1, n):
                g = math.gcd(g, nums[j])
                
                if g == 1:
                    min_len = min(min_len, j - i + 1)
                    break
        
        return -1 if min_len == float('inf') else n + min_len - 2
        