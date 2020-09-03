/*
DP
https://leetcode.com/problems/unique-paths/

Nice Solution explanation of dp: https://leetcode.com/problems/unique-paths/discuss/22954/C%2B%2B-DP

*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> cur(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                cur[j] += cur[j - 1];
            }
        }
        return cur[n - 1];
    }
};
