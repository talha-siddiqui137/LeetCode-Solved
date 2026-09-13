class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> outer_vec;
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> inner_vec;

            for (int j = 0; j < i; j++)
            {
                if (j== 0  || j==i-1)
                {
                    inner_vec.push_back(1);
                }else
                {
                    int val = outer_vec[i-2][j-1] + outer_vec[i-2][j];
                    inner_vec.push_back(val);
                } 
            }
            outer_vec.push_back(inner_vec);
        }
        return outer_vec;
    }
};