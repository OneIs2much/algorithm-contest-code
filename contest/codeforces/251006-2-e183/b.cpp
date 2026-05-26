#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if (n == k) {
		for (int i = 0; i < k; i ++ ) cout << '-';
			cout << endl;
		return;
	}
	int l = 0, r = n - 1, m = 0;
	for (int i = 0; i < k; i ++ ) {
		if (s[i] == '0') l ++ ;
		else if (s[i] == '1') r -- ;
		else m ++ ;
	}
	std::vector<int> v(n, 1);
	for (int i = 0; i < l; i ++ ) v[i] = 0;
	for (int i = 0; i < m; i ++ ) v[l + i] = v[r - i] = -1;
	for (int i = r + 1; i < n; i ++ ) v[i] = 0;
	for (int i = 0; i < n; i ++ ) {
		if (v[i] == 0) cout << '-';
		else if (v[i] == -1) cout << '?';
		else cout << '+';
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