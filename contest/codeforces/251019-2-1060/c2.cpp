#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

vector<vector<int>> pri(200005);

void solve() {
	int n, ans = 2;
	cin >> n;
	vector<int> a(n + 1), b(n + 1);
	map<int, int> cnt;

	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int i = 1; i <= n; i ++ ) cin >> b[i];
    for (int i = 1; i <= n; i ++ ) {
        for (auto x : pri[a[i]]) {
            if (cnt[x] > 0) {
            	cout << 0 << endl;
            	return;
            }
            cnt[x] ++ ;
        }
    }

	vector<int> ord(n + 1);
	iota(ord.begin() + 1, ord.end(), 1);
	sort(ord.begin() + 1, ord.end(), [&](int x, int y) -> bool{
		return b[x] < b[y];
	});
	ans = b[ord[1]] + b[ord[2]];

	int idx = ord[1];
	vector<int> check;
	for (int i = 1; i <= n; i ++ ) {
		for (auto x : pri[a[i]]) {
			if (i != idx) {
				check.push_back(x);
			}
            cnt[x] -- ;
        }

		for (auto x : pri[a[i] + 1]) {
            if (cnt[x] > 0) {
            	ans = min(ans, b[i]);
            }
        }

		for (auto x : pri[a[i]]) {
            cnt[x] ++ ;
        }
	}

	for (int x : check) {
		i64 t = x - (a[idx] % x);
		ans = min(i64(ans), t * b[idx]);
	}


	cout << ans << endl;
}

int main () {
	int T = 1;
	for (int i = 2; i <= 200000; i ++ ) {
		if (!pri[i].empty()) {
			continue;
		}

		for (int j = i; j <= 200000; j += i ) {
			pri[j].push_back(i);
		}
	}

	cin >> T;
	while (T -- ) {
		solve();
	}
}