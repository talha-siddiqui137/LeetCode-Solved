class Solution {
public:
    int get(int n, bool left) {
        if (n == 1) return 1;

        int half = n / 2;

        int res = get(half, !left);

        if (left)
        {
            return 2 * res;
        } else 
        {
            if (n % 2 == 0) 
            {
                return 2 * res - 1;
            }else 
            {
                return 2 * res;
            }
        }
    }

    int lastRemaining(int n) {
        return get(n, true);
    }
};