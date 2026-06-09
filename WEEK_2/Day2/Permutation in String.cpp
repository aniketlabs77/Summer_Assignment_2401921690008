class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(); 
        int n2 = s2.size(); 

        vector<int> hash(26, 0) ;
        for(auto ch : s1) hash[ch - 'a']++ ; 

        int l = 0 ; 
        vector<int> currHash(26, 0) ;
        for(int r = 0 ; r<n2 ; r++){
            currHash[s2[r] - 'a']++ ; 

            if(r-l+1 > n1){
                currHash[s2[l] - 'a']-- ; 
                l++ ; 
            }

            if(r-l+1 == n1){
                if(currHash == hash) return true ; 
            }
        }

        return false ; 
    }
};