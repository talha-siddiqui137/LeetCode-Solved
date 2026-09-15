class Solution {
public:
    int split(string s) {
        int count = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
            } else if (count > 0) {
                break;
            }
        }
        return count;
    }

    int lengthOfLastWord(string s) {
        return split(s); 
    }
};
