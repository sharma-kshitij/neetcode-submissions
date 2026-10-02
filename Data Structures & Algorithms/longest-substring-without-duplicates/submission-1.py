class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxLen=0
        l=0
        r=0
        st = set()
        while(r<len(s)):
            if(s[r] in st):
                st.remove(s[l])
                l+=1
            else:
                st.add(s[r])
                r+=1
                maxLen = max(maxLen,len(st))
        return maxLen