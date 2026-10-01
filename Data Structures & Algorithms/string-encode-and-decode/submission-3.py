class Solution:

    def encode(self, strs: List[str]) -> str:
        encodedString = ""
        for i in strs:
            encodedString += str(len(i)) + "#" + i
        return encodedString

    def decode(self, s: str) -> List[str]:
        p1 = 0
        words = []
        while(p1<len(s)):
            length = ""
            while(s[p1]!='#'):
                length += s[p1]
                p1 += 1
            wordLen = int(length)
            p1 += 1
            words.append(s[p1:p1+wordLen])
            p1+=wordLen
        return words