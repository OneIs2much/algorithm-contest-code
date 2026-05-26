#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (a == b && a == c && a == d) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}