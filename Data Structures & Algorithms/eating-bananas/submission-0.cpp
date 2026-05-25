class Solution {
   public:
    int checkPiles(vector<int> piles, int k,int h){
        int cnt = 0;
        for (auto i : piles){
            if(i<=k){
                cnt++;
            }else{
                cnt += (i + k - 1) / k;
            }
        }
        if(cnt == h){
            return 0;
        }else if(cnt<h){
            return 1;
        }else return -1;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int imax = 0;
        for (auto i : piles) {
            imax = max(imax, i);
        }

        int left = 1;
        int right = imax;

        int ans=imax;

        while(left<=right){
            int mid = (left+right)/2;
            int condition = checkPiles(piles,mid,h);

            if(condition==1 || condition==0){
                ans = mid;
                right = mid-1;
            }else if(condition == -1){
                left=mid+1;
            }
        }

        return ans;
    }
};
