#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void solve() {
	int n;
	cin >> n;
	int a = 0;
	for (int i = 1; i <= n; i ++ ) {
		for (int j = 1; j <= n; j ++ ) {
			int ans = (i - 1) * n + j;
			for (int k = 0; k < 4; k ++ ) {
				int x = dx[k] + i, y = dy[k] + j;
				if (x >= 1 && x <= n && y >= 1 && y <= n) ans += (x - 1) * n + y;
			}
			a = max(a, ans);
		}
	}
	cout << a << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}