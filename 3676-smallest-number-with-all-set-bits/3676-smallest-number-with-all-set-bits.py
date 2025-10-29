class Solution:
    def smallestNumber(self, n: int) -> int:
        x = n

        while((x & (x + 1)) != 0):   # This is the formula for the binary method
            x = x + 1    # Here we will increment the value of binary numbers
        
        return x
            
        
        