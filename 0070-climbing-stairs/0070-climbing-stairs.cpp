class Solution {
public:
    int climbStairs(int n) {
        int a = 1; // Do nothing is a one way
        int b = 1; // Always climb 1 steps
        for(int i = 2; i <= n; i++){
            int c = a + b;
            a = b;
            b = c;
        }
        return b;

    }
};