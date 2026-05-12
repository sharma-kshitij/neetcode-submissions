class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> res;

        for(auto i:strs){
            vector<int> key(26,0);
            for(auto c : i){
                key[c-'a']++;
            }
            res[key].push_back(i);
        }

        vector<vector<string>> ans;
        for(auto i:res){
            ans.push_back(i.second);
        }
        return ans;
    }
};
