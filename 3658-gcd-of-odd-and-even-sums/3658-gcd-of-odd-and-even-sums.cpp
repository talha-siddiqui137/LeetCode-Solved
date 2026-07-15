int GDC(int a , int b){

    if(b == 0){
        return a;
    }

    return (b, a % b);
}
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n==1) {return 1;}
        int odd_sum = n * n;
        int even_sum = n * (n+1);

        return GDC(even_sum, odd_sum);
    }
};
