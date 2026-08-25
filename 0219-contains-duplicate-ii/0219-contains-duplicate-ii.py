class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        
        last_seen = {}

        for i in range(len(nums)):
            if nums[i] in last_seen:
                if i - last_seen[nums[i]] <= k:   # index approach
                    return True
                    break
            last_seen[nums[i]] = i
        else:
            return False
        
        # seen = set()
        # for i in range(len(nums)):
        #     if nums[i] in seen:
        #         return True
        #         break

        #     seen.add(nums[i])       # sliding window

        #     if len(seen) > k:
        #         seen.remove(nums[i - k])
        # else:
        #     return False
        