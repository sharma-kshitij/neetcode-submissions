class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        st = set(nums)
        curr = 0
        maxi = 0
        for i in nums:
            if((i-1)in st):
                continue
            ind = i
            while((ind+1) in st):
                curr+=1
                ind+=1
            maxi = max(curr+1,maxi)
            curr = 0
        return max(curr,maxi)