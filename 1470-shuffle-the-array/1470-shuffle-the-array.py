class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        newNums = []
        
        for i in range(n):
            newNums.append(nums[i])
            newNums.append(nums[i + n])

        return newNums
