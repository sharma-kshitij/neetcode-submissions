class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l=0
        r=len(numbers)-1
        while(l<r):
            numSum = numbers[l] + numbers[r]
            if (numSum < target):
                l+=1
            if(numSum > target):
                r-=1
            elif(numSum == target):
                return [l+1,r+1]
        return []
