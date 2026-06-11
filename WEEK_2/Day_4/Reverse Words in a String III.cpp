class Solution {
public:
    void reverse(string& s, int l, int r){
        while(l < r){
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }

    string reverseWords(string s) {
        int n = s.size(); 

        int i = 0 ; 
        int j = 0 ; 

        while(i<n && j<n){
            while(j<n && s[j]!=' ') j++; 
            reverse(s, i, j-1); 

            j+=1 ; 
            i = j ; 
        }

        return s ; 
    }
};