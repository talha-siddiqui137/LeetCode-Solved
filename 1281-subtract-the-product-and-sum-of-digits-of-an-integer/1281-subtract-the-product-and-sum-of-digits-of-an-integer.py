class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        pro = 1
        su = 0
        for i in str(n):
            pro *= int(i)
            su += int(i)
        return pro - su
       