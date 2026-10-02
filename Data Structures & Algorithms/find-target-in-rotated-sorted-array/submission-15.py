class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def binarySearch(l,r,nums,target):
            while(l<=r):
                mid = int((l+r)//2)
                if(nums[mid] == target):
                    return mid
                if(nums[mid] > target):
                    r = mid-1
                else:
                    l = mid+1
            return -1

        def findMin(nums):
            l=0
            r=len(nums)-1
            while(l<r):
                mid = int((l+r)//2)
                if(nums[mid] > nums[r]):
                    l = mid+1
                else:
                    r = mid
            return l

        pivotInd = findMin(nums)

        if(len(nums)<2):
            if(nums[0] == target):
                return 0
            return -1

        if(nums[0] < nums[-1]):
            return binarySearch(0,len(nums)-1,nums,target)
        else:
            if(target >= nums[0]):
                return binarySearch(0,pivotInd-1,nums,target)
            else:
                return binarySearch(pivotInd,len(nums)-1,nums,target)
