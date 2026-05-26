class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        pairs = []
        for i in range(len(nums)):
            pairs.append((nums[i], i))
        pairs.sort()
        left = 0
        right = len(pairs)-1
        while(left<right):
            sum = pairs[left][0] + pairs[right][0]
            if(sum == target):
                return sorted([pairs[left][1],pairs[right][1]])
            
            elif(sum<target):
                left+=1
            else:
                right-=1
        return [0,0]