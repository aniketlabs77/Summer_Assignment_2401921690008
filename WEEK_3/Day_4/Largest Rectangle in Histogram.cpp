class Solution {
public:
    vector<int> nseFn(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> res(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[i] <= heights[st.top()])
                st.pop();

            if (st.empty())
                res[i] = n;
            else
                res[i] = st.top();

            st.push(i);
        }

        return res;
    }

    vector<int> pseFn(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> res(n);

        for (int i = 0; i <n ; i++) {
            while (!st.empty() && heights[i] <= heights[st.top()])
                st.pop();

            if (st.empty())
                res[i] = -1;
            else
                res[i] = st.top();

            st.push(i);
        }

        return res;/
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse = nseFn(heights);
        vector<int> pse = pseFn(heights);

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, (nse[i] - pse[i] - 1) * heights[i]);
        }

        return ans;
    }
};