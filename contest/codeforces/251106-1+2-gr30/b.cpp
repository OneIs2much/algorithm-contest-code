#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i ++ ) {
		cin >> a[i];
	}

	if (a[1] == 1) {
		cout << a[1] << ' ' << a[2] << endl;
		return;
	}
	
	for (int i = 1; i <= n - 1; i ++ ) {
		for (int j = i + 1; j <= n; j ++ ) {
			if (a[j] % a[i] % 2 == 0) {
				cout << a[i] << ' ' << a[j] << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}