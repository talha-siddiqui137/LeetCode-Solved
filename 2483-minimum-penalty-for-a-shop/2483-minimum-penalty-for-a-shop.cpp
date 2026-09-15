#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int yCount(string a) 
    {
        int val = 0;
        for (char ch : a) 
        {
            if (ch == 'Y') val++;
        }
        return val;
    }

    int yLength(string b)
    {
        int len = 0;
        for (char ch : b)
        {
            len++;
        }
        return len;
    }

    int bestClosingTime(string customers) {
        int penalty = yCount(customers); 
        int len = yLength(customers);      
        int minPenalty = penalty;
        int bestTime = 0;

        for (int i = 0; i < len; i++) 
        {
            if (customers[i] == 'Y')
            {
                penalty--;
            }
            else 
            {
                penalty++;
            }
            
            if (penalty < minPenalty) {
                minPenalty = penalty;
                bestTime = i + 1;
            }
        }

        return bestTime;
    }
};

