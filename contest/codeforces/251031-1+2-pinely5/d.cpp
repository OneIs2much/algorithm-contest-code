#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	a[0] = 0;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int j = n; j >= 1; j -- ) a[j] -= a[j - 1];
	for (int i = 2; i <= n; i ++ ) {
		
	}
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}