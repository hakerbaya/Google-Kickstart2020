#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    int n;
    cin >> n;
        vector<int> input(n);
        for (auto &i : input) cin >> i;
        vector<vector<int>> dp(n, vector<int>(4, 0x3fffffff));
        dp[0] = {0, 0, 0, 0};
        for (int i = 1; i < n; i++) {
            if (input[i] == input[i - 1]) {
            int minnum = 0x3fffffff;
            for (int j = 0; j < 4; j++) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j]);
                minnum = min(minnum, dp[i - 1][j]);
            }
            for (int j = 0; j < 4; j++) {
                dp[i][j] = min(dp[i][j], minnum + 1);
            }
            } else if (input[i] > input[i - 1]) {
            int minnum = 0x3fffffff;
            for (int j = 0; j < 4; j++) {
                dp[i][j] = min(dp[i][j], minnum);
                minnum = min(dp[i - 1][j], minnum);
            }
            for (int j = 0; j < 4; j++) {
                dp[i][j] = min(dp[i][j], minnum + 1);
            }
            } else if (input[i] < input[i - 1]) {
            int minnum = 0x3fffffff;
            for (int j = 3; j >= 0; j--) {
                dp[i][j] = min(dp[i][j], minnum);
                minnum = min(dp[i - 1][j], minnum);
            }
            for (int j = 0; j < 4; j++) {
                dp[i][j] = min(dp[i][j], minnum + 1);
            }
            }
        }
        int ans = 0x3fffffff;
        for (auto &i : dp[n - 1]) {
            ans = min(ans, i);
        }
        cout << ans << endl;
        }
} 