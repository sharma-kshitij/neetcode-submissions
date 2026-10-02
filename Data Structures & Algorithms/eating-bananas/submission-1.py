class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
    
        def canEat(piles, speed):
            hours = 0

            for pile in piles:
                hours += (pile + speed - 1) // speed

            return hours <= h
        
        maxES = max(piles)
        minES = maxES

        low=1
        high=maxES

        while(low<high):
            mid = int((low+high)//2)
            if(canEat(piles,mid)):
                high = mid
            else:
                low = mid+1
        return high