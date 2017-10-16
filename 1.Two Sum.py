class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic = {}
        for i in range(0,len(nums)): 
			dic[nums[i]] = i
            
		for i in range(0,len(nums)): 
			tmp = target - nums[i]
            if dic.has_key(tmp) and not dic[tmp] == i:
                return [i,dic[tmp]]