class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        for char in s:
            mp[char] = mp.get(char,0) + 1
        mp2={}
        for char in t:
            mp2[char] = mp2.get(char,0) + 1
        return mp == mp2