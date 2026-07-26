class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        l1 = []
        for i in range(1, n+1):
            if n%i == 0 :
                l1.append(i)
        if k <= len(l1):
            return l1[k-1]
        else:
            return -1
