class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int len = 0;
        if (grid[grid.size()-1][grid[0].size()-1] >=0)
        {
            return len;
        }else
        {
            for (int i = grid.size()-1; i >= 0; i--)
            {
                int j_count = grid[0].size()-1;
                for (int j = grid[0].size()-1; j >= 0; j--)
                {
                    if (grid[i][j]>=0)
                    {
                        j = j - j_count;

                    }else if (grid[i][j]<0)
                    {
                        len++;
                        j_count--;
                    }
                } 
            }
        }
        return len;
    }
};