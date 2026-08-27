class Solution:
    def balancedStringSplit(self, s: str) -> int:
        c_R,c_L,res = 0,0,0
        for i in range(len(s)):
            if s[i] == 'R':
                c_R += 1
            elif s[i] == 'L':
                c_L += 1
            if c_R == c_L:
                res += 1
                c_R,c_L = 0,0
        return res