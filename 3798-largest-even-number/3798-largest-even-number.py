class Solution:
    def largestEven(self, s: str) -> str:
        i = len(s)
        edge = False
        while(i>0):
            if int(s[-1]) % 2 == 0:
                edge = True
                return s
            else:
                s = s[:i-1]
            i -= 1
        if edge == False:
            return ""