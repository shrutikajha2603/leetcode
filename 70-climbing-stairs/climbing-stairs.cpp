#include <unordered_map>

class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> memo;
        return climbStairsMemo(n, memo);
    }

private:
    int climbStairsMemo(int n, unordered_map<int, int>& memo) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        int ways = climbStairsMemo(n - 1, memo) + climbStairsMemo(n - 2, memo);
        memo[n] = ways;
        return ways;
    }
};
