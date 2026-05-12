class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        for(int i=0;i<height.size();i++){
            int maxLeft = 0;
            for(int j=0;j<i;j++){
                maxLeft = max(maxLeft,height[j]);
            }

            int maxRight = 0;
            for(int j=i+1;j<height.size();j++){
                maxRight = max(maxRight,height[j]);
            }

            int water = min(maxLeft,maxRight) - height[i];
            if(water>0){
                ans+=water;
            }
        }
        return ans;
    }
};
