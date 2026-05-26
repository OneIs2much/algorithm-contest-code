#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> v(n + 1);
	iota(v.begin(), v.end(), 0);
	v[l - 1] = v[r];
	for (int i = 1; i <= n; i ++ ) {
		cout << (v[i] ^ v[i - 1]) << ' ';
	}
	cout << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}