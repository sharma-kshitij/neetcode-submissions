class Solution:
    def findMin(self, nums: List[int]) -> int:
        
        if(nums[-1] > nums[0]):
            return nums[0]

        if(len(nums) < 2):
            return nums[0]
        
        l=0
        r=len(nums)-1

        while(l<r):
            mid = int((l+r)//2)
            if(nums[mid] > nums[r]):
                l = mid+1
            else:
                r = mid
        return nums[l]