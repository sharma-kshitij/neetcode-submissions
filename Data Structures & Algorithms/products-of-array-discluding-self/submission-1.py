class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        leftProd = [1] * len(nums)
        rightProd = [1] * len(nums)
        for i in range(1,len(nums)):
            leftProd[i] = nums[i-1]*leftProd[i-1]
        for i in range(len(nums)-2,-1,-1):
            rightProd[i] = nums[i+1] * rightProd[i+1]
        ans = [1] * len(nums)
        for i in range(len(nums)):
            ans[i] = leftProd[i] * rightProd[i]
        return ans
        