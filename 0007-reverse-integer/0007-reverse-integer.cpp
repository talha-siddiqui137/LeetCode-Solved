class Solution {
public:
    int reverse(int x) {
        bool negative = false;
        long long temp = x;

        if (temp < 0) {
            negative = true;
            temp = -temp;
        }

        string s = to_string(temp);
        std::reverse(s.begin(), s.end());

        long long num = stoll(s);

        if (negative)
            num = -num;

        if (num < INT_MIN || num > INT_MAX)
            return 0;

        return (int)num;
    }
};
