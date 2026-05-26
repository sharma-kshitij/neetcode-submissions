class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mp = {}
        for n in nums:
            mp[n] = mp.get(n, 0) + 1
        for key in mp:
            if(mp[key]>1):
                return True
        return False