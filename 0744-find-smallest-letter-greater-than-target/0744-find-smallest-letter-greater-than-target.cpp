class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int st = 0;
        int end = letters.size()-1;

        char res = letters[0];

        while (st<=end)
        {
            int mid = (st + end)/2;

            if (letters[mid] > target)
            {
                end = mid - 1;
                if (mid != 0)
                {
                    if (letters[mid-1]<= target)
                    {
                        res = letters[mid];
                        break;
                    }
                }
            }else
            {
                st = mid + 1;
            }
        }
        return res;
    }
};