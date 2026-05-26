#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> b(n + 1), inc;
	vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0)), cost(k + 1, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i ++ ) cin >> b[i];
	inc.push_back(1);
	for (int i = 1; i <= n; i ++ ) {
		if (b[i] > b[inc[inc.size() - 1]]) inc.push_back(i);
	}

	for (int i = 1; i <= k; i ++ ) {
		int r = i, m = 0;
		for (int j = 1; j <= n; j ++ ) {
			if (b[j] <= m) {
				dp[i][j] = dp[i][j - 1] + m;
				cost[i][j] = cost[i][j - 1];
			}
			else if (r >= b[j]) {
				r -= b[j];
				m = b[j];
				dp[i][j] = dp[i][j - 1] + m;
				cost[i][j] = cost[i][j - 1] + b[j];
			}
			else {
				dp[i][j] = dp[i][j - 1] + m;
				for (int p = m + 1; p <= i; p ++ ) {
					if (dp[i][j] + m * (n - j) < dp[i - p][j - 1] + p * (n - j + 1)) {
						dp[i][j] = dp[i - p][j - 1] + p;
						cost[i][j] = cost[i - p][j - 1] + p;
						r = i - cost[i][j];
						m = p;
					}
					else if (dp[i][j] + m * (n - j) == dp[i - p][j - 1] + p * (n - j + 1)) {
						if (r < i - cost[i - p][j - 1] - p) {
							r = i - cost[i - p][j - 1] - p;
							cost[i][j] = i - r;
							m = p;
						}
					}
				}
			}
			cout << i << ' ' << j << ' ' << dp[i][j] << endl;
		}
	}

	cout << dp[k][n] << endl << "+++++++++++++++++++++++" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}