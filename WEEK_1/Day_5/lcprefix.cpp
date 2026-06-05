de
C++
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0]; 
        if(strs.empty()) return "";
        string ans = ""; 
        sort(strs.begin(), strs.end()); 

        string first = strs[0]; 
        string last = strs[n-1]; 

        int minLen = min( first.size(), last.size()); 

        for(int i=0 ; i<minLen ; i++){
            if(first[i]!=last[i]) break ; 
            ans+=first[i]; 
        }
        return ans ; 
    }
};