class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        # str_num=[str(i) for i in range(1,n+1)]
        # l = [int(i) for i in sorted(str_num)]
        # return l
        res = []
        curr = 1
        for _ in range(n):
            res.append(curr)
            if curr * 10 <= n:
                curr *= 10
            else:
                while curr % 10 == 9 or curr + 1 > n:
                    curr //= 10
                curr += 1
        return res
