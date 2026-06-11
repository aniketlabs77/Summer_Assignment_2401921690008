class Solution {
public:
    int idx = 0 ; 
    int n ; 

    string solve(string s){
        string ans = ""; 

        while(idx<n && s[idx]!=']'){
            if(isdigit(s[idx])){

                int num = 0 ; 
                while(idx<n && isdigit(s[idx])) num = num*10 + (s[idx++] - '0'); 

                idx++ ; 
                string inner = solve(s); 
                idx++ ; 

                while(num--) ans+=inner ; 

            }
            else{
                ans += s[idx]; 
                idx++ ; 
            }
        } 

        return ans ; 
    }

    string decodeString(string s) {
        n = s.size(); 
        return solve(s); 
    }
};