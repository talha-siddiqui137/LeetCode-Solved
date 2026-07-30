class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        w = []
        for i in range(len(accounts)):
            c = 0
            for j in range(len(accounts[0])):
                c+=accounts[i][j]
            w.append(c)
        return max(w)    
