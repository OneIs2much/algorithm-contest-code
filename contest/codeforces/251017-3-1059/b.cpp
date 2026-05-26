#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	set<int> m;

	for (int i = 0; i < n; i ++ ) {
		if (s[i] == '1') {
			cnt ++ ;
			m.insert(i);
		}
	}
	cout << cnt << endl;
	for (auto i: m) cout << i + 1 << ' ' ;
	cout << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}