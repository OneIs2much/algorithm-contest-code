#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int r0, x, d, n;
	cin >> r0 >> x >> d >> n;

	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < n; i ++ ) {
		if (s[i] == '1') {
			r0 = max(0, r0 - d);
			ans ++ ;
			continue;
		}
		if (r0 < x) {
			ans += n - i;
			break;
		}
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