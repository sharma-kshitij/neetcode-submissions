class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> count;
        vector<vector<int>> freq(nums.size()+1);

        for(auto i:nums){
            count[i]++;
        }

        for( auto i:count){
            freq[i.second].push_back(i.first);
        }

        vector<int> ans;
        for(int i = freq.size()-1;i>=0;i--){
            for(auto j:freq[i]){
                ans.push_back(j);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
