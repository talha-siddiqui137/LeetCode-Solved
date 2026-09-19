class Solution {
public:
    bool detectCapitalUse(string word) {
        bool upper = false , allUpper = false, allLower = false;
        int upperCount =0, lowerCount = 0;

        if (word[0]>='A' && word[0]<='Z')
            {
                upper = true;
            }
        for(int i =1; i< word.size();i++){
            if (word[i]>='A' && word[i]<='Z')
            {
                upperCount ++;
            }else if (word[i]>='a' && word[i]<='z')
            {
                lowerCount ++;
            }   
        }

        if ((upperCount - (word.size()-1))==0)
        {
            allUpper = true;
        }
        if ((lowerCount - (word.size()-1))==0)
        {
            allLower = true;
        }
    
        bool res = false;
        if (upper==true && allUpper == true)
        {
            res = true;
        }else if (upper == true && allLower == true)
        {
            res = true;
        }else if (upper == false && allLower == true)
        {
            res = true;
        }
        return res;
    }
};