class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        single = []
        double = []
        for i in nums:
            if i <10 :
                single.append(i)
            else:
                double.append(i)
        if sum(single)==sum(double):
            return False
        else:
            return True