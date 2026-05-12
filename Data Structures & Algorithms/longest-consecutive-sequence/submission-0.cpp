class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int ans=0;
        int n = nums.size();


        
        for(int i=0;i<n;i++){
            if(st.find(nums[i]-1)==st.end()){
                int len=0;
                while(st.count(nums[i]+len)){
                    len++;
                    ans=max(ans,len);
                }
            }
        }
        return ans;
    }
};
