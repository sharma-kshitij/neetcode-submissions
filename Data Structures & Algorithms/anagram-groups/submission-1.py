class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp={}
        for string in strs:
            cnt = [0]*26
            for i in string:
                cnt[ord(i)-ord('a')]+=1

            key = tuple(cnt)
            if (key not in mp):
                mp[key] = []
            
            mp[key].append(string)
        ans=[]
        for key in mp:
            ans.append(mp[key])
        return ans