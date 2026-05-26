#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	i64 n, x1, y1, x2, y2, ans;
	cin >> n >> x1 >> y1 >> x2 >> y2;

	i64 x = abs(x2- x1), y = abs(y2 - y1);

	if (x == 0) {
		if (y2 > y1) ans = y1 + y;
		else ans = n - y1 + y;
	}
	else if (y == 0) {
		if (x2 > x1) ans = x1 + x;
		else ans = n - x1 + x;
	}
	else {
		if (x1 < x2 && y1 < y2) {
			ans = max(x + x1, y + y1);
		}
		else if (x1 < x2 && y1 > y2) {
			ans = max(x + x1, n - y1 + y);
		}
		else if (x1 > x2 && y1 < y2) {
			ans = max(n - x1 + x, y + y1);
		}
		else ans = max(n - x1 + x, n - y1 + y);
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