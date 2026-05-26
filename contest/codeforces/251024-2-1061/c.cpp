#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

vector<vector<int>> primes[200005];

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n + 1);

	for (int i = 1; i <= n; i ++ ) cin >> a[i];

	int ans = a[1];

	for (int i = 1; i <= n; i ++ ) {
		
	}
	
}

int main () {
	int T = 1;
	cin >> T;

	for (int i = 2; i <= 200005; i ++ ) {
		if (!primes.empty()) {
			continue;
		}
		for (int j = i; j <= 200005; j += i) {
			primes[j].push_back(i);
		}
	}

	while (T -- ) {
		solve();
	}
}