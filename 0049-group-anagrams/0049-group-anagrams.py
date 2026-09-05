class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        g = {}

        for word in strs:
            key = "".join(sorted(word))
            if key not in g:     
                g[key] = []         
            g[key].append(word)   
        return list(g.values())