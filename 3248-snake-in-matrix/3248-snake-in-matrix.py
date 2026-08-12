class Solution:
    def finalPositionOfSnake(self, n: int, commands: List[str]) -> int:
        i, j = 0, 0 
        for char in commands:
            if char == "UP":
                i -= 1
            elif char == "DOWN":
                i += 1
            elif char == "LEFT":
                j -= 1
            elif char == "RIGHT":
                j += 1
        return (i*n)+j
            