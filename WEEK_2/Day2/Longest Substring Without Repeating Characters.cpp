class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);
        int n = s.size();
        int l = 0;
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            if (hash[s[i]] != -1 && l <= hash[s[i]]) {
                l = hash[s[i]] + 1;
            }

            maxLen = max(maxLen, i - l + 1);
            hash[s[i]] = i;
        }

        return maxLen;
    }
};