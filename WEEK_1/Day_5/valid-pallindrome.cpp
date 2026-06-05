class Solution {
public:
    string cleanString(string& s) {
        string result = "";
        for (char ch : s) {
            if (isspace(ch))
                continue;
            if (!isalnum(ch))
                continue;

            result += tolower(ch);
        }
        return result;
    }

    

    bool isPalindrome(string s) {
        string cleaned = cleanString(s);
        string revString =cleaned ; 
        reverse(revString.begin(), revString.end()); 
        
        return cleaned == revString;
    }
};