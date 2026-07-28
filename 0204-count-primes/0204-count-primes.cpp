// class Solution {
// public:
//     int countPrimes(int n) {
//         if ((n == 0) || (n == 1))
//         {
//             return 0;
//         }else
//         {
//             int res = 0;
//             for (int i = 2 ; i < n ; i++)
//             {
//                 bool isPrime = true;
//                 for (int j = 2; j * j <= i; j++)
//                 {
//                     if (i%j == 0)
//                     {
//                         isPrime = false;
//                         break;
//                     } 
//                 }
//                 if (isPrime) {
//                     res++;
//                 }
//             }
//             return res;
//         }
//         return 0;
//     }
// };                  //  n root n 

// nlog(logn)

class Solution {
public:
    int countPrimes(int n) {

        vector<bool> prime(n, true);

        if (n <= 2)
            return 0;

        prime[0] = prime[1] = false;
        
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++;
                for (int j = i * 2; j < n; j = j + i) {
                    prime[j] = false;
                }
            }
        }

        return count;
    }
};