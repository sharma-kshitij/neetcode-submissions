class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l = 0
        r = len(heights)-1
        curr=0
        maxi=0
        while(l<r):
            breadth = r-l
            length = min(heights[l],heights[r])
            curr = length*breadth
            maxi = max(curr,maxi)
            if(heights[l]<heights[r]):
                l+=1
            else:
                r-=1
        return maxi
