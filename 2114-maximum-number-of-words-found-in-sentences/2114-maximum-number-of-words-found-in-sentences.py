class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        res = []
        for i in range(0,len(sentences)):
            x = sentences[i].count(" ")
            res.append(x)
        return (max(res)+1)