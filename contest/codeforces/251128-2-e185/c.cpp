#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void solve() {
	int n;
	i64 k;
	cin >> n >> k;
	vector<i64> q(n + 1), r(n + 1);
	for (int i = 1; i <= n; i ++ ) cin >> q[i];
	for (int i = 1; i <= n; i ++ ) cin >> r[i];

	sort(q.begin() + 1, q.end());
	sort(r.begin() + 1, r.end());

	int pos = 0, ans = 0;
	for (int i = n; i >= 0; i -- ) {
		if (r[i] >= k) continue;
		else {
			pos = i;
			break;
		}
	}

	for (int i = 1, j = pos; i <= pos && j >= 1; ) {
		if (q[i] * r[j] <= k - q[i] - r[j]) {
			i ++ ;
			j -- ;
			ans ++ ;
		}
		else j -- ;
	}
	cout << ans << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}