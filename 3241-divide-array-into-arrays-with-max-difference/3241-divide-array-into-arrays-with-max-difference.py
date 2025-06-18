class Solution:
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
        # Sort the array
        nums.sort()
        
        result = []

        #Traverse in steps of 3
        for i in range(0, len(nums), 3):
            a, b, c = nums[i], nums[i + 1], nums[i + 2]

        # Check difference between max and min in triplet
            if c - a > k:
                return []

        #Append the valid triplet
            result.append([a, b, c])
        
        return result