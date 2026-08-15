class Solution:
    def lexSmallest(self, s: str) -> str:
        n = len(s)
        ans = s
        for k in range(1, n+1):
            s_new1=s[:k][::-1]+ s[k:]
            if s_new1 < ans:
                ans = s_new1
            s_new2 = s[:n-k] + s[n-k:][::-1]
            if s_new2 < ans:
                ans = s_new2
        return ans