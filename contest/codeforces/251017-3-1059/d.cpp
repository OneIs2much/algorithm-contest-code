#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	int i = 1, j = n, l, r;

	if (n == 1) {
		cout << "! " << 1 << ' ' << 1 << endl;
		return;
	}

	while (i < j) {
		int mid = (i + j) >> 1;
		int a1, a2;

		cout << 1 << ' ' << i << ' ' << mid << endl;
		cout.flush();
		cin >> a1;

		cout << 2 << ' ' << i << ' ' << mid << endl;
		cout.flush();
		cin >> a2;

		if (a1 != a2) {
			j = mid;
		}
		else i = mid + 1;
	}
	l = j;

	int a1, a2;

	cout << 1 << ' ' << l << ' ' << n << endl;
	cout.flush();
	cin >> a1;

	cout << 2 << ' ' << l << ' ' << n << endl;
	cout.flush();
	cin >> a2;

	cout << "! " << l << ' ' << l + (a2 - a1) - 1 << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}