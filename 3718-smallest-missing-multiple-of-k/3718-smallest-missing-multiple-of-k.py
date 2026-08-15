class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        z = set(nums)
        mul = k
        while True:
            if mul not in z:
                return mul
            mul += k