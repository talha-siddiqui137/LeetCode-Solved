class Solution:
    def minimumChairs(self, s: str) -> int:
        res = 0
        wait = 0
        for i in range(0,len(s)):
            if s[i]== "E":
                res += 1
            else:
                res -= 1
            wait = max(wait,res)
        return wait
