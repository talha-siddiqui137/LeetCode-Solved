from collections import Counter

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        count = Counter(nums)
        n = len(nums)
        duplicate = missing = -1
        
        for i in range(1, n+1):
            if count[i] == 2:
                duplicate = i
            elif count[i] == 0:
                missing = i
                
        return [duplicate, missing]
