class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        s_nums = [str(i) for i in nums]
        j = "".join(s_nums)  
        res = []
        for i in range(1,len(j)+1):
            sli = j[0:i]
            n = int(sli, 2)
            if (n%5 == 0):
                res.append(True)
            else:
                res.append(False)
        return res        

        # gpt optimize
# class Solution:
#     def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
#         ans = []
#         value = 0

#         for bit in nums:
#             value = (value * 2 + bit) % 5
#             ans.append(value == 0)

#         return ans