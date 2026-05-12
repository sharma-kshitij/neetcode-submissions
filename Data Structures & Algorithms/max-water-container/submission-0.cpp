class Solution {
public:

    int getWaterArea(vector<int> heights, int l,int r){
        int length = r-l;
        int breadth = min(heights[l],heights[r]);
        return length*breadth;
    }

    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l=0,r=n-1;
        int maxWater = 0;
        while(l<r){
            maxWater = max(maxWater,getWaterArea(heights,l,r));
            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxWater;
    }
};
