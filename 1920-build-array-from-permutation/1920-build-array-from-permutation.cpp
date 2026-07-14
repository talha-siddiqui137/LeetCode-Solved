// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     vector<int> nums = {5,0,1,2,3,4};
//     vector<int> ans(nums.size(), 0);


//     for (int i = 0; i < ans.size(); i++)
//     {
//         ans[i] = nums[nums[i]];
//     }

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }
    
//     return 0;
// }    ///       used 0(n) memory 

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();

        // Encode old and new values
        for (int i = 0; i < n; i++)
        {
            nums[i] += n * (nums[nums[i]] % n);
        }

        // Extract the new values
        for (int i = 0; i < n; i++)
        {
            nums[i] /= n;
        }
        return nums;
    }
};
