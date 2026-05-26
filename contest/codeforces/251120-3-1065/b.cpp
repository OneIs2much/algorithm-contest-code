#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i ++ ) cin >> a[i];

	if (a[1] == -1 || a[n] == -1) {
		cout << 0 << endl;
		if (a[1] == a[n]) {
			for (int i = 1; i <= n; i ++ ) {
				if (a[i] == -1) cout << 0 << ' ';
				else cout << a[i] << ' ';
			}
		}
		else if (a[1] == -1) {
			cout << a[n] << ' ';
			for (int i = 2; i <= n; i ++ ) {
				if (a[i] == -1) cout << 0 << ' ';
				else cout << a[i] << ' ';
			}
		}
		else {
			for (int i = 1; i <= n - 1; i ++ ) {
				if (a[i] == -1) cout << 0 << ' ';
				else cout << a[i] << ' ';
			}
			cout << a[1] << ' ';
		}
		cout << endl;
	}
	else {
		cout << abs(a[n] - a[1]) << endl;
		for (int i = 1; i <= n; i ++ ) {
			if (a[i] == -1) cout << 0 << ' ';
			else cout << a[i] << ' ';
		}
		cout << endl;
	}
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}