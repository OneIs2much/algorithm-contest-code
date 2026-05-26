#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	i64 n;
	cin >> n;
	unordered_map<int, int> a;
	i64 t;
	cin >> t;
	cout << 1 << ' ';
	a[1] = 1;

	for (int i = 2; i <= n; i ++ ) {
		i64 r;
		cin >> r;

		if (r - t == i) {
			a[i] = i;
			cout << i << ' ';
		}

		else {
			cout << a[i - (r - t)] << ' ';
			a[i] = a[i - (r - t)];
		}
		t = r;
	}
	cout << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}