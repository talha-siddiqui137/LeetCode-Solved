class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return(0)
        elif n==1:
            return(1)
        else:
            a, b = 0, 1
            c = []
            for i in range(n):
                c.append(a)
                a, b = b, a+b
            res = (c[-1]+c[-2])
            return (res)