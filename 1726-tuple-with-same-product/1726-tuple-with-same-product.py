from itertools import combinations
from collections import Counter
class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        products = [a*b for a, b in combinations(nums, 2)]
        freq = Counter(products)

        total = 0
        for ch in freq.values():
            if ch > 1:
                total += 8*(ch*(ch - 1)) // 2
        return total