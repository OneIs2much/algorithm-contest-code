#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	int zero = 0, one = 0;
	for (int i = 1; i <= n; i ++ ) {
		cin >> a[i];
		if (a[i] % 2 == 0) zero ++ ;
		else one ++ ;
	}
	if (zero && one) {
		sort(a.begin() + 1, a.end());
		for (int i = 1; i <= n; i ++ ) {
			cout << a[i];
			if (i != n) cout << ' ';
		}
		cout << endl;
		return;
	}
	
	for (int i = 1; i <= n; i ++ ) {
		cout << a[i];
		if (i != n) cout << ' ';
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