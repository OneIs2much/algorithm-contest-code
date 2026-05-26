#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 1; i <= n; i ++ ) {
		int t;
		cin >> t;
		s.insert(t);
	}

	while (!s.count(s.size())) {
		s.insert(s.size());
	}
	cout << s.size() << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}