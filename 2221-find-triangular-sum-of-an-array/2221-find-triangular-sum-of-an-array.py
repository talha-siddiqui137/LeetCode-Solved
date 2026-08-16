class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        while len(nums)>1:
            newNums = []
            for i in range(len(nums)-1):
                n=(nums[i]+nums[i+1]) % 10 # this take only last digit like 8+8=16 so 6
                newNums.append(n)
            nums = newNums
        return max(nums)
    #     class Solution:
    # def triangularSum(self, nums):
    #     while len(nums) > 1:
    #         nums = [(nums[i] + nums[i+1]) % 10 for i in range(len(nums)-1)]
    #     return nums[0]