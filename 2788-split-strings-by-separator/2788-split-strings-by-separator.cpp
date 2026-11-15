class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {

        vector<string> res ;

        for (int i = 0; i < words.size(); i++)
        {
            string add_ch = "";
            for (int j = 0; j < words[i].size(); j++)
            {
                if (words[i][j] == separator)
                {
                    if (add_ch.size() != 0)
                    {
                        res.push_back(add_ch); 
                    }
                    add_ch = "";
                }else
                {
                    add_ch += words[i][j];
                }
            }
            if (add_ch.size() != 0)
            {
                res.push_back(add_ch);
            }
        }
        return res;
    }
};