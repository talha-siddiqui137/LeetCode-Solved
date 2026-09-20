class Solution {
public:
    bool isValid(string word) {
        bool vol = false, con = false;

        if (word.size() < 3) {
            return false;
        }

        for (char ch : word) {

            if (ch == '@' || ch == '#' || ch == '$') {
                return false;
            }

            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                vol = true;
            }

            else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                con = true;
            }
        }
        return (vol && con);
    }
};