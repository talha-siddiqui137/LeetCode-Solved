class Solution {
public:

    bool isValid(vector<int> arr, int n , int m, int mid){
        int student = 1 , pages = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i]> mid)
            {
                return false;
            }
        
            if (arr[i]+pages <= mid)
            {
                pages+= arr[i];
            }else
            {
                student++;
                pages = arr[i];
            }  
        }

        return (student>m ? false : true);
    }

    int sumArr(vector<int> arr, int n){
        int adding = 0;
        for (int i = 0; i < n; i++)
        {
            adding+= arr[i];
        }
    
        return adding;
    }
    int allocateBooks(vector<int> &arr, int n , int m){
    
        if (m>n)
        {
            return -1;
        }
    
        int st = 0 , end = sumArr(arr, n);
        int ans = -1;
        while (st<=end)
        {
            int mid = st + (end - st)/2;
            if (isValid(arr, n, m, mid))
            {
                ans = mid;
                end = mid - 1;
            }else
            {
                st = mid + 1;
            }
        }
        return ans;
    }

    int splitArray(vector<int>& nums, int k) {

        int n = nums.size(), m = k;

        return allocateBooks(nums, n , m);
    }
};