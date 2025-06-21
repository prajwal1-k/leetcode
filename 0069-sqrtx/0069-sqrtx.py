class Solution(object):
    def mySqrt(self, x):
        if x == 0:
            return 0
        left, right = 1, x

        while left<= right:
            mid = (left + right) // 2

            if mid * mid == x:
                return mid
            elif mid * mid < x:
                left = mid + 1
            else:
                right = mid - 1
        return right     # Here we have used this bcs right ends up as the largest number such that right * right <= x
        