class Solution {
public:
    int dp[1001][1001]; 

    bool isPalindrome(string &s, int i, int j){
        if(i>=j) return true ; 

        if(dp[i][j] != -1) return dp[i][j]; 

        if(s[i] != s[j]) return dp[i][j] = false ; 
        else return dp[i][j] = isPalindrome(s, i+1, j-1); 
    }

    string longestPalindrome(string s) {
        memset(dp, -1, sizeof(dp)); 
        int n = s.size(); 
        int maxLen = 0 ; 
        int startIdx = 0 ; 

        for(int i = 0 ; i<n ; i++){
            for(int j= i ; j<n ; j++){
                if(isPalindrome(s, i, j)){
                    if(maxLen < j - i + 1){
                        maxLen = j-i+1 ; 
                        startIdx = i ; 
                    }
                }
            }
        }

        return s.substr(startIdx, maxLen); 
    }
};