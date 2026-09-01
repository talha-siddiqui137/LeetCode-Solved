from itertools import combinations
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:        
        res = 0
        for x,y in combinations(range(len(nums)),2):
            if (nums[x]==nums[y]) and (x<y):
                res +=1
        return res