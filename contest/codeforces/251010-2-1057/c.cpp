#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;

	vector<i64> v(n), w;
	for (int i = 0; i < n; i ++ ) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	i64 ans = 0, flag = 0, one = 0;
	for (int i = n - 1; i > 0; i -- ) {
		if (v[i] == v[i - 1]) {
			if (i == 1) {
				one = 1;
			}
			flag ++ ;
			ans += v[i] * 2;
			i -- ;
		}
		else {
			w.push_back(v[i]);
		}
	}
	if (flag == 0) {
		cout << 0 << endl;
		return;
	}

	if (!one) w.push_back(v[0]);

	if (w.size() == 0) {
		if (flag == 1) {
			cout << 0 << endl;
			return;
		}
		cout << ans << endl;
		return;
	}

	reverse(w.begin(), w.end());

	if (w[0] >= ans) {
		if (flag == 1) {
			cout << 0 << endl;
			return;
		}
		cout << ans << endl;
		return;
	}

	auto it = lower_bound(w.begin(), w.end(), ans) - 1;
	ans += *it;

	if (*it == w[0]) {
		cout << ans << endl;
		return;
	}

	cout << ans + *(it - 1) << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}