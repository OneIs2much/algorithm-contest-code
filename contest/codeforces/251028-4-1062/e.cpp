#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i ++ ) cin >> a[i];


	if (k < x + 1 - n) {
		for (int i = 0; i < k; i ++ ) cout << i << ' ';
		cout << endl;
		return;
	}
	else {
		
	}
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}