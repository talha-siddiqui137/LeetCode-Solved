class Solution {
public:
    int countCollisions(string directions) {
        int count = 0;

        int i = 0;
        int j = directions.size()-1;

        while (j>=0)
        {
            if (directions[j] == 'R')
            {
                j--;
            }else
            {
                break;
            }
        }

        while (i<=directions.size()-1)
        {
            if (directions[i] == 'L')
            {
                i++;
            }else
            {
                break;
            }
        }
    
        int total = 0;
    
        for (int t = i; t <= j; t++)
        {
            if (directions[t] == 'L' || directions[t] == 'R')
            {
                total ++;
            }
        
        }
        return total;
    }
};