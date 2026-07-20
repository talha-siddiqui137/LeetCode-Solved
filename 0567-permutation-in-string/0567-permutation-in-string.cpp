class Solution {
private:
    bool isFreqSame(const int freq1[26], const int freq2[26]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(std::string s1, std::string s2) {
        int freq[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.length();

        for (int i = 0; i < s2.length(); i++) {
            int windIdx = 0, idx = i;
            int windFreq[26] = {0};

            while (windIdx < windSize && idx < s2.length()) {
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }

            if (isFreqSame(freq, windFreq)) { // found
                return true;
            }
        }

        return false;
    }
};