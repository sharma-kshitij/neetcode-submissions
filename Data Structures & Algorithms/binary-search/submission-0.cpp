class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n-1;
        int low = 0;

        while(low<=high){
            int mid = low + (high - low) / 2;

            int midEl = nums[mid];
            if(midEl == target){
                return mid;
            }
            else if(midEl < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        return -1;
    }
};
