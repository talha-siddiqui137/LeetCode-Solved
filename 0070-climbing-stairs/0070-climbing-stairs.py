class Solution:
    def climbStairs(self, n: int) -> int:
        a, b = 1, 1
        res = a
        for i in range(n+1):
            res = a
            a,b = b, a+b
        return res        