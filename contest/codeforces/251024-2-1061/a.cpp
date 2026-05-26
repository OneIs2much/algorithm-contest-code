#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	cout << (n / 2) - !(n % 2) << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}