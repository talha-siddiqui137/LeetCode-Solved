class Solution {
public:
    int binaryGap(int n) {
        int max_dist = 0;
        int current_dist = 0; 
        bool first = false;

        while (n > 0) {
            int rem = n % 2;
            n = n / 2;

            if (rem == 1) {
                if (first) {
                    max_dist = max(max_dist, current_dist);
                }
                current_dist = 1; 
                first = true;     
            } else {
                if (first) {
                    current_dist++; 
                }
            }
        }

        return max_dist;
    }
};