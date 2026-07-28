class Solution:
    def minSteps(self, s: str, t: str) -> int:
        s = sorted(s)   
        t = sorted(t)    
        i = 0
        j = 0
        steps = 0

        while i<len(s) and j<len(t):
            if s[i]==t[j]:
                i+=1
                j+=1
            elif s[i]<t[j]:
                steps += 1       
                i+=1
            else:
                steps+=1      
                j+=1
        steps += (len(s)-i)+(len(t)-j)
        return steps