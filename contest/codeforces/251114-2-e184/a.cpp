#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n, a = 0, b = 0, x;
	cin >> n >> x;

	for (int i = 1; i <= n; i ++ ) {
		int t;
		cin >> t;
		if (t < x) a += 1;
		else if (t > x) b += 1;
	}
	if (a > b) cout << x - 1 << endl;
	else cout << x + 1 << endl;
	
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}