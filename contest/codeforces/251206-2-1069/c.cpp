#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	string s, t;
	cin >> s >> t;
	vector<int> a(26, 0), b(26, 0);
	for (int i = 0; i < s.size(); i ++ ) {
		a[s[i] - 'a'] ++ ;
	}
	for (int i = 0; i < t.size(); i ++ ) {
		b[t[i] - 'a'] ++ ;
	}
	for (int i = 0; i < 26; i ++ ) {
		b[i] -= a[i];
		if (b[i] < 0) {
			cout << "Impossible" << endl;
			return;
		}
	}
	for (int i = 0; i < s.size(); i ++ ) {
		for (int j = 0; j < s[i] - 'a'; j ++ ) {
			while (b[j]) {
				cout << char('a' + j);
				b[j]--;
			}
		}
		cout << s[i];
	}
	for (int j = 0; j < 26; j ++ ) {
		while (b[j]) {
			cout << char('a' + j);
			b[j]--;
		}
	}
	cout << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}