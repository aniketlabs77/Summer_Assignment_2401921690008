class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // holds indices
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            // Remove elements out of this window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // Remove smaller elements from the back
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);

            // Add to result once the first window is done
            if (i >= k - 1)
                result.push_back(nums[dq.front()]);
        }

        return result;
    }
};