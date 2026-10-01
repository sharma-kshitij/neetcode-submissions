class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp1 = dict.fromkeys(s,0)
        mp2 = dict.fromkeys(t,0)
        for i in s:
            mp1[i] = mp1[i]+1
        for i in t:
            mp2[i] = mp2[i]+1
        return mp1==mp2