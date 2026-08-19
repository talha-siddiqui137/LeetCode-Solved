class Solution:
    def partitionArray(self, nums: List[int], k: int) -> int:
        count = 1
        nums.sort()
        start = nums[0]
        for i in nums:
            if i -  start>k:
                count += 1
                start = i
        return (count)        