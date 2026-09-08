class Solution:
    def largestNumber(self, nums):
        new_list_strs = [str(i) for i in nums]
        for i in range(len(new_list_strs)):
            for j in range(i+1,len(new_list_strs)):
                if new_list_strs[i]+new_list_strs[j] < new_list_strs[j]+new_list_strs[i]:
                    new_list_strs[i], new_list_strs[j] = new_list_strs[j], new_list_strs[i]
        result = "".join(new_list_strs)
        if result[0]=="0":
            return "0"
        else:
            return result