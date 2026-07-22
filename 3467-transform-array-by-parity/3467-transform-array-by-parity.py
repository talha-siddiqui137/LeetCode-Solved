class Solution:
    def transformArray(self, nums: List[int]) -> List[int]:
        even = []
        odd = []
        for i in nums :
            if (i%2 == 0):
                even.append(0)
            else:
                odd.append(1)
        return even + odd
