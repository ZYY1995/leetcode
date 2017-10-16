def quicksort(nums):
        
        size = len(nums)
        star = 0
        left  = 0
        right = size - 1
        for i = range(0,size):
            
            for j = range(left,size):
                if nums[j] >= star:
                    break
            left = j
            for j = range(right, 1, -1):
                if nums[j] < star:
                    break
            right = j
            if left >= right
                break
            nums[left],nums[right] = exchange(nums[left],nums[right])
                
        nums[star],nums[left] = exchange(nums[star],nums[left])
        
        quicksort(nums[0:left])
        quicksort(nums[left + 1:size])
        
        return nums
    
def exchange(a,b):
	return b,a