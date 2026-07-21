class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        p = []
        n = []
        for i in nums:
            if (i>0):
                p.append(i)
            else:
                n.append(i)
        result = []
        for i in range(len(p)):
            result.append(p[i])
            result.append(n[i])
        return result
