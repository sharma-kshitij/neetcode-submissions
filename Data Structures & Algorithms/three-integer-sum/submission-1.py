class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        st = set()
        for i in range(len(nums)):
            l = i+1
            r = len(nums)-1
            while(l<r):
                total = nums[l] + nums[r] + nums[i]
                if(total == 0):
                    st.add((nums[i],nums[l],nums[r]))
                    l+=1
                    r-=1
                if(total < 0):
                    l+=1
                if(total > 0):
                    r-=1
        return list(st)