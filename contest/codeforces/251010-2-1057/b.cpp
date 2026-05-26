#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	while (a || b || c) {
		if (a % 2 + b % 2 + c % 2 == 2) {
			cout << "NO" << endl;
			return;
		}
		a >>= 1;
		b >>= 1;
		c >>= 1;
	}
	cout << "YES" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}