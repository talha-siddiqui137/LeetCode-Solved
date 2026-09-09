class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:

        c = []

        for i in range(len(mat)):
            c.append(sum(mat[i]))

        index = 0
        add = 0

        for i in range(len(c)):
            if c[i]>add:
                index = i
                add = c[i]
        return [index, add]

# class Solution:
#     def rowAndMaximumOnes(self, mat):
#         max_ones = 0
#         row_index = 0

#         for i in range(len(mat)):
#             count = mat[i].count(1)
#             if count > max_ones:
#                 max_ones = count
#                 row_index = i

#         return [row_index, max_ones]