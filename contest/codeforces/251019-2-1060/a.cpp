#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	std::vector<int> v;
	for (int i = 0; i < n; i ++ ) {
		if (s[i] == '1') {
			v.push_back(i);
		}
	}
	if (v.size() == 0) {
		cout << 0 << endl;
		return;
	}
	int t = v[0], ans = 1;

	for (int i = 1; i < v.size(); i ++ ) {
		if (v[i] - t > k - 1) {
			ans ++ ;
		}
		t = v[i];
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