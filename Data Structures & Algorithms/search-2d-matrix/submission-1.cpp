class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        //figure out the row
        int high = m-1;
        int low = 0;

        while(low<=high){
            int mid = (high+low)/2;
            int midEl = matrix[mid][n-1];

            if(midEl == target) return true;
            else if(midEl < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        if (low >= m)
            return false;
        int colLow = 0;
        int colHigh = n-1;
        while(colLow <= colHigh){
            int colMid = (colLow + colHigh)/2;
            int colMidEl = matrix[low][colMid];
            if(colMidEl == target){
                return true;
            }else if(colMidEl < target){
                colLow = colMid + 1;
            }else{
                colHigh = colMid-1;
            }
        }
        return false;

    }
};
