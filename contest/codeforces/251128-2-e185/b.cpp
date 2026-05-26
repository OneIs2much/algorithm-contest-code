#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i ++ ) cin >> a[i];

	sort(a.begin() + 1, a.end());

	int no = 0, total = 0, rest = n - a[n];

	for (int i = 1; i <= n; i ++ ) {
		if (a[i] == 0) no = i;
		else {
			total += a[i];
			if (n != i) rest -= a[i] - 1;
		}
	}
	no += 1;
	int ans = n - no + 1;
	if (rest <= 0) cout << ans << endl;
	else {
		cout << ans - rest << endl;
	}
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}