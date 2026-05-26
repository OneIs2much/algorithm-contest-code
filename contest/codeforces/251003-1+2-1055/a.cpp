#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i ++ ) {
		int t;
		cin >> t;
		s.insert(t);
	}
	cout << s.size() * 2 - 1 << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}