#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	i64 n, x;

	cin >> n >> x;

	vector<i64> a(n + 1);
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	
	sort(a.begin() + 1, a.end(), [&](i64 i, i64 j) -> bool{
		if (i / x != j / x) return i / x > j / x;
		return i % x < j % x;
	});
	
	vector<i64> ans;
	i64 l = 1, r = n;
	i64 sum = 0, now = 0;

	while (l <= r) {
		if (a[r] + now >= x) {
			ans.push_back(a[r]);
			if (a[r] + now >= x) {
				sum += a[r];
			}
			now = (a[r] + now) % x;
			r -- ;
		}
		else {
			ans.push_back(a[l]);
			if (a[l] + now >= x) {
				sum += a[l];
			}
			now = (a[l] + now) % x;
			l ++ ;
		}
	}
	cout << sum << endl;
	for (auto i : ans) cout << i << ' ';
	cout << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}