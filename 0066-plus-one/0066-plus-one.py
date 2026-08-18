class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s = ""
        for i in range(len(digits)):
            s += str(digits[i])
        p = int(s)+1
        res =[]
        for i in str(p):
            res.append(int(i))
        return (res)