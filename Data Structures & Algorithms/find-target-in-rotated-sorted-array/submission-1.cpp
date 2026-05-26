class Solution {
public:
    int findPivot(vector<int> arr){
        int n = arr.size();
        int left = 0;
        int right = n-1;

        while(left<right){
            int mid =(left+right)/2;
            if(arr[mid]<arr[right]){
                right = mid;
            }else{
                left=mid+1;
            }
        }
        return left;
    }

    int binarySearch(int left,int right,vector<int> nums,int target){
        while(left<=right){
            int mid = (left+right)/2;
            if(target<nums[mid]){
                right=mid-1;
            }else if(target > nums[mid]){
                left=mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;

        if(nums[left]<nums[right]){
            return binarySearch(left,right,nums,target);
        }

        int pivot = findPivot(nums);
         if(target >= nums[pivot] && target <= nums[right]){
            return binarySearch(pivot,right,nums,target);
        }else{
            return binarySearch(left,pivot,nums,target);
        }
    }
};
