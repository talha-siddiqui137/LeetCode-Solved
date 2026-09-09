class Solution:
    def div(self, n):
        divs = []
        for i in range(1, int(n**0.5) + 1):
            if n % i == 0:
                divs.append(i)
                if i != n // i:
                    divs.append(n // i)

        return (sorted(divs))

    def sumFourDivisors(self, nums: List[int]) -> int:
        res = 0
        for i in nums:
            d = self.div(i)
            if len(d) == 4:
                res+=sum(d)

        return res