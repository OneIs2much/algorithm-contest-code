#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

vector<i64> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

void solve() {
	i64 n;
	cin >> n;
	vector<i64> ans;

	for (int i = 1; i <= n; i ++ ) {
		i64 t;
		cin >> t;

		if (t >= 2) {
			for (auto j : primes) {
				if (t % j != 0) {
					ans.push_back(j);
					break;
				}
			}
		}
		else ans.push_back(2);
	}

	cout << *min_element(ans.begin(), ans.end()) << endl;
}

int main () {
	int T = 1;
	cin >> T;

	while (T -- ) {
		solve();
	}
}