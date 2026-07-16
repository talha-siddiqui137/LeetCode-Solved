class Solution:
    def pivotInteger(self, n: int) -> int:
        S = n * (n + 1) // 2  # total sum
        x = int(S ** 0.5)      # sqrt(S)
        return x if x * x == S else -1