class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());   //0 1 3 4 4 5 

        set<double> distinct ;

        while(nums.size() > 0){
            int a = nums.front();
            int b = nums.back();

            double c = (a+b)/2.0;

            distinct.insert(c);
            nums.pop_back();
            nums.erase(nums.begin());
        }
        return distinct.size();
    }
};