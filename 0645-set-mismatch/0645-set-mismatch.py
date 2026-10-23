class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        set_nums = set(nums)

        n = len(nums)
        real_sum = n * (n + 1) // 2

        list_sum = sum(nums)
        set_sum = sum(set_nums)

        repeated_number = list_sum - set_sum

        missing_number = real_sum - set_sum

        return [repeated_number, missing_number]
