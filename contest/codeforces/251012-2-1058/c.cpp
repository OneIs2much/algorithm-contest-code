#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	i64 n;
	cin >> n;

	while (n % 2 == 0 && n) n >>= 1;
	int i = 32, j = 0;

	while ((n >> i) % 2 == 0 && i != 0) {
		i -- ;
	}

	while (i >= j) {
		if ((n >> i) % 2 != (n >> j) % 2) {
			cout << "NO\n";
			return;
		}
		if (i == j) {
			if ((n >> i) % 2 == 1) {
				cout << "NO\n";
				return;
			}
		}
		i -- ;
		j ++ ;
	}

	cout << "YES\n";
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}