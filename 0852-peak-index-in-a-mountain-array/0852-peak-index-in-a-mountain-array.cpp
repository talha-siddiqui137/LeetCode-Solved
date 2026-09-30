class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int ed = arr.size()-2;

        while (st<=ed)
        {
            int mid = st + (ed - st)/2;
            if ((arr[mid+1] > arr[mid-1]) && (arr[mid+1] > arr[mid]))
            {
                st = mid+1;
            }else if ((arr[mid-1] > arr[mid+1]) && (arr[mid-1] > arr[mid]))
            {
                ed = mid-1;
            }else
            {
                return mid;
                break;
            } 
        }
        return 0;
    }
};
