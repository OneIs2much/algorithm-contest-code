#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	int n, m;
	cin >> n >> m;

	priority_queue<int> aa;
	priority_queue<int, vector<int>, greater<int>> a;

	for (int i = 1; i <= n; i ++ ) {
		int t;
		cin >> t;
		a.push(t);
	}

	vector<int> b(m + 1), c(m + 1), ord(m + 1);
	for (int i = 1; i <= m; i ++ ) cin >> b[i];
	for (int i = 1; i <= m; i ++ ) cin >> c[i];		

	iota(ord.begin() + 1, ord.end(), 1);
	sort(ord.begin() + 1, ord.end(), [&](int x, int y) -> bool{
		return b[x] <= b[y];
	});

	int ans = 0;
	vector<int> zero;

	for (int i = 1; i <= m && !a.empty(); i ++ ) {
		auto t = a.top();

		if (t < b[ord[i]]) {
			while (!a.empty()) {
				t = a.top();
				if (t < b[ord[i]]) {
					aa.push(t);
					a.pop();
				}
				else break;
			}
			if (t < b[ord[i]]) {
				break;
			}
		}

		if (c[ord[i]] == 0) {
			zero.push_back(ord[i]);
			continue;
		}

		ans ++ ;
		t = max(t, c[ord[i]]);
		a.pop();
		a.push(t);
	}

	while (!a.empty()) {
		aa.push(a.top());
		a.pop();
	}

	for (int i = zero.size() - 1; i >= 0 && !aa.empty(); i -- ) {
		auto t = aa.top();
		if (t >= b[zero[i]]) {
			ans ++ ;
			aa.pop();
		}
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