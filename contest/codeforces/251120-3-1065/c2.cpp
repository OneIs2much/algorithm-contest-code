#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	vector<int> b(n + 1);
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int i = 1; i <= n; i ++ ) cin >> b[i];

	int bpos = max(*max_element(a.begin() + 1, a.end()), *max_element(b.begin() + 1, b.end()));

	for (int i = 30; i >= 0; i -- ) {
		if (bpos >> i) {
			bpos = i;
			break;
		}
	}

	int sa = 0, sb = 0, pos = 0;

	for (int j = bpos; j >= 0; j -- ) {
		for (int i = 1; i <= n; i ++ ) {
			sa ^= a[i] >> j;
			sb ^= b[i] >> j;
			if ((a[i] >> j) % 2 != (b[i] >> j) % 2) pos = i;
		}
		if (sa != sb) {
			if (pos % 2 == 1) cout << "Ajisai" << endl;
			else cout << "Mai" << endl;
			return;
		}
		sa = 0;
		sb = 0;
		pos = 0;
	}
	cout << "Tie" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}