class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> sum;
      int n = nums.size();
      for(int i=0;i<n;i++){
        if(sum.find(target-nums[i]) != sum.end()){
            return {sum[target-nums[i]],i};
        }
        sum[nums[i]] = i;
      }
      return {};
    }
};
