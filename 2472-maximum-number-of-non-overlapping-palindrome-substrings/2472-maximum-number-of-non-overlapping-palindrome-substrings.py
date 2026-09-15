class Solution:
    def maxPalindromes(self, s: str, k: int) -> int:
        n, i, res = len(s), 0, 0
        while i <=n - k:
            for l in [k, k + 1]:
                #this will check whether the string is palindrome
                if i + l <= n and s[i: i+l] == s[i: i+l][::-1]:
                    res += 1
                    i += (l - 1)
                    break
            i += 1
        return res  