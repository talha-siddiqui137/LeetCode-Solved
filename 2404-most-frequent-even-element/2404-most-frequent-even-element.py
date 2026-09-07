from collections import Counter 
class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        d = Counter(nums)

        ans = -1
        max_freq = 0

        for num, freq in d.items():
            if num % 2 == 0:
                if freq > max_freq or (freq == max_freq and num < ans):
                    max_freq = freq
                    ans = num

        return ans