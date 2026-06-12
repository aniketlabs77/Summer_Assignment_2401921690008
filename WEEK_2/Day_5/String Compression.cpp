class Solution {
public:
    int compress(vector<char>& chars) {
        int len = 0;
        int i = 0;
        int j = 0;
        int k = 0;
        char currChar;

        for (k = 0; k < chars.size(); k++) {

            if (len == 0) {
                currChar = chars[k];
                len = 1;
            } else {
                if (chars[k] == currChar) {
                    len++;
                } else {
                    if (len == 1) {
                        chars[i] = currChar;
                        i++;
                        j++;
                        currChar = chars[k]; 
                    } else {
                        chars[i] = currChar;
                        j = i + 1;
                        string num = to_string(len);

                        int l = 0;
                        while (l < num.size()) {
                            chars[j] = num[l];
                            j++;
                            l++;
                        }

                        i = j;
                        len = 1;
                        currChar = chars[k];
                    }
                }
            }
        }
        chars[i] = currChar;
        i++;

        if (len > 1) {
            string num = to_string(len);

            for (char ch : num) {
                chars[i] = ch;
                i++;
            }
        }

        return i;
    }
};