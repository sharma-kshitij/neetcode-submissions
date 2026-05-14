class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st; // {temp, index}
        vector<int> ans(temperatures.size(), 0);

        for (int i = 0; i < (int)temperatures.size(); ++i) {
            while (!st.empty() && temperatures[i] > st.top().first) {
                int idx = st.top().second;
                st.pop();
                ans[idx] = i - idx;
            }
            st.push({temperatures[i], i});
        }

        return ans;
    }
};