#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	vector<pair<int, int>> v;
	vector<int> last;

	for (int i = 1; i <= n; i ++ ) cin >> a[i];

	int t = a[1];
	for (int i = 2; i <= n; i ++ ) {
		if (a[i] > t) {
			v.push_back({a[i], t});
			if (!last.empty() && a[i] > last[0]) {
				for (auto tt: last) {
					v.push_back({a[i], tt});
				}
				last.clear();
			}
			continue;
		}
		last.push_back(t);
		t = a[i];
	}
	if (last.empty()) {
		cout << "Yes" << endl;
		for (auto vv: v) cout << vv.first << ' ' << vv.second << endl;
	}
	else cout << "No" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}