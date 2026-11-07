class Solution {
public:
    int calPoints(vector<string>& operations) {
        int totalSum = 0;

        vector<int> newVec ;

        for(int i = 0 ; i < operations.size() ; i++){

            if (operations[i] == "+" && newVec.size()>=2)
            {
                int val = (newVec[newVec.size() - 1] + newVec[newVec.size() - 2]);
                newVec.push_back(val);

            }else if (operations[i] == "C" && newVec.size()>=1)
            {
                newVec.pop_back();

            }else if (operations[i] == "D" && newVec.size()>=1)
            {
                int doubleVal = 2*(newVec[newVec.size()-1]);
                newVec.push_back(doubleVal);
            }else
            {
                newVec.push_back(stoi(operations[i]));
            }
        }
    
        for (int i = 0; i < newVec.size(); i++)
        {
            totalSum += newVec[i];
        }

        return totalSum;
    }
};