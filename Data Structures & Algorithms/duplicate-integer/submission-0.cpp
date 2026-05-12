class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> freq;
        for(auto i:nums){
            freq[i]++;
        }

        for(auto i:freq){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};