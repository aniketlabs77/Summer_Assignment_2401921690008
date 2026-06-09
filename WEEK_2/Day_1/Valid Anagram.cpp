class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char,int> freqmap1;
        unordered_map<char,int> freqmap2;

        for(int i=0 ; i<s.length() ; i++){
            freqmap1[s[i]]++;
            freqmap2[t[i]]++;


        }

        if(freqmap1==freqmap2){
            return true;
        }
        else return false;


        
    }
};