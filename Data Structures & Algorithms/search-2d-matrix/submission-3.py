class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        r1=0
        r2=len(matrix)-1
        while(r1<=r2):
            mid = int((r2+r1)//2)
            if(matrix[mid][0] <= target <= matrix[mid][-1]):
                break
            if(target < matrix[mid][0]):
                r2 = mid-1
            else:
                r1 = mid+1
        l=0
        r=len(matrix[0])-1
        while(l<=r):
            m = int((r+l)//2)
            if(target == matrix[mid][m]):
                return True
            if(target < matrix[mid][m]):
                r = m-1
            else:
                l=m+1
        
        return False