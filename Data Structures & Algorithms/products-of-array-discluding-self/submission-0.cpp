class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ltr(n);
        vector<long long> rtl(n);
        long long currProd=1;
        for(int i=0;i<n;i++){
            ltr[i] = currProd*nums[i];
            currProd*=nums[i];
        }
        currProd=1;
        for(int i = n-1;i>=0;i--){
            rtl[i] = currProd*nums[i];
            currProd*=nums[i];
        }
        vector<int> ans(n);
        for(auto i:ltr){
            cout << i << " ";
        }cout << endl;

        for(auto i:rtl){
            cout<< i << " ";
        }cout << endl;
        for(int i=0;i<n;i++){
             if(i==0){
                ans[i]=rtl[i+1];
            }
            else if(i>0 && i<n-1){
                ans[i] = ltr[i-1]*rtl[i+1];
            }
            else{
                ans[i]=ltr[i-1];
            }
        }
        return ans;
    }
};
