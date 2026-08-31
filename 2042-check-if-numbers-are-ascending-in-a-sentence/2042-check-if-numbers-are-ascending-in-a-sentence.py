class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        l = s.split()
        n = [int(i) for i in l if i.isdigit()]
        if (n==sorted(n)) and (len(n)==len(set(n))):
            return True
        else:
            return False      