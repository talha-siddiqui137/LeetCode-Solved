class Solution {
public:
    int minimumDeletions(string s) {
        int countB = 0;
        int del = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='b')
            {
                countB++;
            }else
            {
                del = min(del+1, countB);
            } 
        }
        return del;
    }
};