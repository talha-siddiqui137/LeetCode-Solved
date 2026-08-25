from collections import Counter        
class Solution:
    def firstUniqChar(self, s: str) -> int:         
        d = Counter(s)
        for i,j in d.items():
            if j == 1:
                return s.find(i)
                break
        return -1
