class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size(); 
        
        for(int i=n/2 ; i>=1 ; i--){
            if(n%i != 0) continue ; 

            string temp = ""; 
            int times = n/i ; 
            string sub = s.substr(0, i); 

            while(times--){
                temp += sub ; 
            }

            if(temp == s) return true ; 
        }

        return false ;    }
};