class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        t =0
        lenth = 0
        if min(costs)>coins:
            return 0
        else: 
            for i in costs:
                if t<=coins:
                    if t+i <= coins:
                        t+=i
                        lenth +=1
            return lenth
