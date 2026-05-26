#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	i64 a, b;
	cin >> a >> b;
	int i = 40, j = 40;

	while (i >= 0 && (a >> i) % 2 == 0) {
		i -- ;
	}
	while (j >= 0 && (b >> j) % 2 == 0) {
		j -- ;
	}
	// cout << i << ' ' << j << endl;

	if (i < j) cout << -1 << endl;

	else {
		// 1001
		// 1111
		// 1001
		// 0110
		i64 c = 0, d = 0;
		set<int> s;
		j = i;

		while (i >= 0) {
			c <<= 1;
			if ((a >> i) % 2 == 0) {
				c += 1;
			}			
			i -- ;
		}

		while (j >= 0) {
			d <<= 1;
			if ((b >> j) % 2 == 0) {
				d += 1;
			}
			j -- ;
		}

		cout << 2 << endl;
		cout << c << ' ' << d << endl;
	}
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}