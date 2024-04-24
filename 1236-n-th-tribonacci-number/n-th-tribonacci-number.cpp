class Solution {
public:
    int tribonacci(int n) {
        int zero = 0, one = 1, two = 1, res;
        if(n < 2)       return n;
        if(n == 2)      return 1;
        for(int i = 3; i <= n; i++){
            res = zero + one + two;
            zero = one;
            one = two;
            two = res;
        }
        return res;
    }
};