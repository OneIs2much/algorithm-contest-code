#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++ ) {
		cin >> a[i];
	}
	set<int> s(a.begin(), a.end());
	a.assign(s.begin(), s.end());
	int ans = 0;
	for (auto i : a) {
		if (ans < i) {
			cout << ans << endl;
			return;
		}
		ans = i + 1;
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