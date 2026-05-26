#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	std::vector<i64> v(n + 1);
	for (int i = 1; i <= n; i ++ ) cin >> v[i];

	i64 l = 1000000000000, r = 0;
	i64 ans = 0;
	for (int i = 1; i <= n; i += 2) {
		if (i + 1 <= n) {
			r = max(r, v[i]);
			r = max(r, v[i + 1]);

			if (v[i] >= min(l, r)) {
				ans += v[i] - min(l, r) + 1;
			}
		}
		l = r;
	}

	if (n % 2 == 1) {
		if (v[n] >= min(l, r)) {
				ans += v[n] - min(l, r) + 1;
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