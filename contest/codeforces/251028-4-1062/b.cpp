#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	vector<int> a(26, 0), b(26, 0);
	for (int i = 0; i < n; i ++ ) {
		a[s1[i] - 'a'] ++ ;
		b[s2[i] - 'a'] ++ ;
	}
	for (int i = 0; i < 26; i ++ ) {
		if (a[i] == b[i]) continue;
		cout << "NO" << endl;
		return ;
	}
	cout << "YES" << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}