#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	vector<int> b(n + 1);
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int i = 1; i <= n; i ++ ) cin >> b[i];
	int sa = 0, sb = 0, pos = 0;
	for (int i = 1; i <= n; i ++ ) {
		sa ^= a[i];
		sb ^= b[i];
		if (a[i] != b[i]) pos = i;
	}
	if (sa == sb) cout << "Tie" << endl;
	else if (pos % 2 == 1) cout << "Ajisai" << endl;
	else cout << "Mai" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}