class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        if abs(x-z)<abs(z-y):
            return 1
        elif abs(z-y)<abs(z-x):
            return 2
        else:
            return 0    