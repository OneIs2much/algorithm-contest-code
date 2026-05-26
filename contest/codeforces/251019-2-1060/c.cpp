#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

vector<vector<int>> pri(200005);
map<int, int> primes;

void solve() {
	int n, ans = 2;
	cin >> n;
	vector<int> a(n + 1), b(n + 1);

	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	for (int i = 1; i <= n; i ++ ) cin >> b[i];

	auto p = primes;
	map<int, int> cnt;

    for (int i = 1; i <= n; i ++ ) {
        for (auto x : pri[a[i]]) {
            if (cnt[x] > 0) {
            	cout << 0 << endl;
            	return;
            }
            cnt[x] ++ ;
        }
    }

	for (int i = 1; i <= n; i ++ ) {
		for (auto x : pri[a[i]]) {
            cnt[x] -- ;
        }

		for (auto x : pri[a[i] + 1]) {
            if (cnt[x] > 0) {
            	cout << 1 << endl;
            	return;
            }
        }

		for (auto x : pri[a[i]]) {
            cnt[x] ++ ;
        }
	}
	cout << 2 << endl;
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