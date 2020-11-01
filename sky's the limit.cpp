// Sky's the limit :)
#include <bits/stdc++.h>
using namespace std;
#define int long long

// Same idea can be extended for 3 strings.
// Common subsequence can be found using backtracking.
int LCS(string s, string t) {
    int dp[105][105] = {};
    int n = s.size(), m = t.size();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i] == t[j])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int T = 1; 
    // cin >> T; 
    while (T--) {
        string s, t;
        cin >> s >> t;

        cout << LCS(s, t) << '\n';
    }
    
    return 0;
}
