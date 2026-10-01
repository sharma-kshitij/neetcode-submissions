class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for i in nums:
            if i in mp:
                mp[i] = mp[i]+1
            else:
                mp[i] = 1
        sorted_mp = sorted(mp.items(), key = lambda x: x[1], reverse = True) 
        arr = []
        for key,value in (sorted_mp):
            arr.append(key)
        return arr[:k]