#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	int mi = maxn, ma = -1 * maxn;

	for (int i = 1; i <= n; i ++ ) {
		int t;
		cin >> t;
		ma = max(ma, t);
		mi = min(mi, t);
	}

	int t;
	cin >> t;
	if (t >= mi && t <= ma) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}