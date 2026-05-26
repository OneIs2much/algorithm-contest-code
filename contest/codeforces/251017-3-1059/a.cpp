#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n;  i ++ ) {
		int t;
		cin >> t;
		ans = max(ans, t);
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