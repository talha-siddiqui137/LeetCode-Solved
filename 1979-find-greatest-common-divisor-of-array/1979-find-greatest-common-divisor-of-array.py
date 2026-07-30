class Solution:
    def findGCD(self, nums: List[int]) -> int:
        mn = min(nums)
        mx = max(nums)
        def gcd(a, b):
            while b!=0:
                a, b = b, a%b
            return a
        return gcd(mn, mx)