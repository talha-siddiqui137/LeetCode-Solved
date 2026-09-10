class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();  // moore voting DSA algo  > 0(n)
        int candidate = 0;
        int freq = 0;

        for(int val : nums)
        {
            if (freq == 0){
                candidate = val;}
            if (val == candidate){
                freq++;}
            else{
                freq--;}
        }
        return candidate;
    }
};