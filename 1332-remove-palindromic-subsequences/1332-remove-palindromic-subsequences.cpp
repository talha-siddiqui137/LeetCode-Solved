class Solution {
public:
    bool isPalindrom(string s){
        string reverseSTR = s;
        int i = 0;
        int j = s.size()-1;

        while (i<j)
        {
            swap(reverseSTR[i], reverseSTR[j]);
        
            i++;
            j--;
        }
    
        if (s == reverseSTR)
        {
            return true;
        }else
        {
            return false;
        }
    }

    int removePalindromeSub(string s) {
        
        if (s.size()==0)
        {
            return 0;
        }else
        {
            bool palindrom = isPalindrom(s);
            if (palindrom == true)
            {
                return 1;
            }else
            {
                return 2 ;
            }   
        }
        return 0;
    }
};