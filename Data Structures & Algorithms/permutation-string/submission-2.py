class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        def createFreqMap(string):
            freq = {}
            for i in string:
                freq[i] = freq.get(i,0) + 1
            return freq

        fm1 = createFreqMap(s1)
        for i in range(len(s2) - len(s1) + 1):
            if (createFreqMap(s2[i:i+len(s1)]) == fm1):
                return True
        return False