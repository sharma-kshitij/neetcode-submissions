class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = {}
        for i in strs:
            sortedWord = ''.join(sorted(i))
            if sortedWord in mp:
                mp[sortedWord].append(i)
            else:
                mp[sortedWord] = [i]
        return list(mp.values())