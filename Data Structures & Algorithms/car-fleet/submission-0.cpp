class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> st;

        vector<pair<int,int>> arr;
        int n = position.size();
        for(int i=0;i<n;i++){
            arr.push_back({position[i],speed[i]});
        }

        sort(arr.begin(),arr.end(),greater());
        for(auto i : arr){
            double distance = target - i.first;
            double time = distance/i.second;

            if(st.empty() || st.top() < time){
                st.push(time);
            }

        }

        return st.size();
    }
};
