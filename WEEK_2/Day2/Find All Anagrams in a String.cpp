class Solution {
public:
    vector<int> findAnagrams(string s1, string s2) {
        int n1 = s1.size(); 
        int n2 = s2.size(); 

        vector<int> res ; 

        vector<int> hash(26, 0) ;
        for(auto ch : s2) hash[ch - 'a']++ ; 

        int l = 0 ; 
        vector<int> currHash(26, 0) ;
        for(int r = 0 ; r<n1 ; r++){
            currHash[s1[r] - 'a']++ ; 

            if(r-l+1 > n2){
                currHash[s1[l] - 'a']-- ; 
                l++ ; 
            }

            if(r-l+1 == n2){
                if(currHash == hash){
                    int ans = r-n2+1; 
                    res.push_back(ans);  
                }

            }
        }

        return res ; 
    }
};