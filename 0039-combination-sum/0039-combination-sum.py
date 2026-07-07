class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        path = []

        def dfs(index, target):
            if target == 0:
                ans.append(path[:])
                return
            
            if target < 0:
                return
            
            for i in range(index, len(candidates)):
                path.append(candidates[i])    # Choose the current candidate
                dfs(i, target - candidates[i])
                path.pop()   # Backtraking Here

        dfs(0, target)
        return ans

