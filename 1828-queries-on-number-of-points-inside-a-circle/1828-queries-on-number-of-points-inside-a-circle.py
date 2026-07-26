class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        res = []
        for xcen,ycen,r in queries:
            count = 0
            for x,y in points:
                if (x-xcen)**2+(y-ycen)**2<=r**2 :
                    count += 1
            res.append(count)
        return res