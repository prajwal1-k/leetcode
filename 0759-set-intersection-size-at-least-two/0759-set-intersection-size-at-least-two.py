class Solution:
    def intersectionSizeTwo(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda x: (x[1], -x[0]))

        result = 0
        a = -1
        b = -1

        for l , r in intervals:
            if l <= a:
                continue
            
            if l > b:
                a = r - 1
                b = r 
                result += 2
            else:
                a = b
                b = r
                result += 1
        return result