class Solution:
    def checkString(self, s: str) -> bool:
        n = len(s)

        for i in range(n):
            if s[i] != 'b':
                continue
            
            for j in range(i + 1, n):
                if s[j] == 'a':
                    return False
        return True
        