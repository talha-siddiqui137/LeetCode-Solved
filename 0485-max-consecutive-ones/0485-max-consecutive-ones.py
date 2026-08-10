class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        c=[]
        a=0
        for i in nums:
            if i==0:
                c.append(a)
                a=0
            else:
                a+=1
        c.append(a)
        return max(c)
            
