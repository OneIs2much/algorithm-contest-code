#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	vector<i64> a(n + 1);
	a[0] = 0;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int i = 1; i <= n; i ++ ) a[i] += a[i - 1];

	i64 ans = a[n];

	for (i64 i = 1; i <= n; i ++ ) {
		for (int l = 1, r = l + i - 1; r <= n; l ++ , r ++ ) {
			ans = max(ans, i * (l + r) + a[l - 1] + a[n] - a[r]);
		}
	}

	cout << ans << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}