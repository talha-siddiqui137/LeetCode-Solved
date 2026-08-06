class Solution:
    def countValidWords(self, sentence: str) -> int:
        s = sentence.split()
        c = 0
        for w in s:
            if any(x.isdigit() for x in w):
                continue
            if w.count('-')>1:
                continue
            if '-' in w:
                i = w.index('-')
                if i == 0 or i == len(w)-1 or not (w[i-1].isalpha() and w[i+1].isalpha()):
                    continue
            if w.count('!')+w.count('.') + w.count(',')>1:
                continue
            if any(ch in '!.,' for ch in w[:-1]):
                continue
            c+=1
        return c