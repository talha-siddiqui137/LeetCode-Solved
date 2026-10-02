class Solution {
public:
    bool halvesAreAlike(string s) {
        int vol_a = 0 , vol_b = 0;
        int mid = (s.size()-1)/2;

        int i = 0;
        int j = s.size()-1;

        while (i<j)
        {
            if ((i<=mid)&&((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u') || (s[i]=='A') || (s[i]=='E') || (s[i]=='I') || (s[i]=='O') || (s[i]=='U')))
            {
                vol_a++;
            }
        
            if ((j>mid)&&((s[j]=='a') || (s[j]=='e') || (s[j]=='i') || (s[j]=='o') || (s[j]=='u') || (s[j]=='A') || (s[j]=='E') || (s[j]=='I') || (s[j]=='O') || (s[j]=='U')))
            {
                vol_b++;
            }
        
            i++;
            j--;
        }
    
        if (vol_a == vol_b)
        {
            return true;
        }else
        {
            return false;
        }
        return 0;
    }
};