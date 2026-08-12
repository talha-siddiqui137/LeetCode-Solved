from collections import Counter
class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        freq = Counter(nums)
        res = []
        
        for num, count in freq.items():
            for i in range(count):
                if len(res) <= i:
                    res.append([])
                res[i].append(num)
        return res