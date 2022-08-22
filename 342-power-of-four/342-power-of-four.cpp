class Solution {
public:
    bool isPowerOfFour(long long int n) {
       return (n & (n - 1)) == 0 && n % 3 == 1;
    }
};