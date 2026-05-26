#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n, q, ok = 0;
	cin >> n >> q;
	string s;
	cin >> s;
	for (int i = 0; i < n; i ++ ) {
		if (s[i] == 'B') {
			ok = 1;
			break;
		}
	}


	while (q -- ) {
		int a, cnt = 0;
		cin >> a;

		if (ok) {
			while (a > 0) {
				for (int i = 0; i < n && a > 0; i ++ ) {
					cnt ++ ;
					if (s[i] == 'B') {
						a /= 2;
					}
					else a -= 1;
				}
			}
			cout << cnt << endl;
		}
		else cout << a << endl;
	}
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}