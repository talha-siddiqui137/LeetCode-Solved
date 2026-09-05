from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        con = Counter(nums)
        top_k = [num for num, freq in con.most_common(k)]
        return top_k