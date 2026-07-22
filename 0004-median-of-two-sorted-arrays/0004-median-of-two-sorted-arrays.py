class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l3 = nums1+nums2
        l3.sort()
        if len(l3)%2 != 0:
            c = len(l3)//2
            return float(l3[c])
        else:
            c = len(l3)//2
            return float((l3[c-1]+l3[c])/2)