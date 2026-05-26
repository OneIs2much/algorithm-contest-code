#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using u64 = unsigned long long;

int maxn = 1000000005;

void solve() {
	string s;
	cin >> s;
	if (s.size() == 1) {
		cout << 1 << endl;
		return;
	}

	vector<vector<int>> a(3);
	for (int i = 0; i < s.size(); i ++ ) {
		if (s[i] == '<') a[1].push_back(i);
		else if (s[i] == '>') a[2].push_back(i);
		else a[0].push_back(i);
	}

	if (a[0].size() == s.size()) cout << -1 << endl;
	else if (a[1].size() == s.size()) cout << s.size() << endl;
	else if (a[2].size() == s.size()) cout << s.size() << endl;
	else if (a[0].size() == 0 && a[1][a[1].size() - 1] < a[2][0]) cout << max(a[1].size(), a[2].size()) << endl;
	else if (a[0].size() == 1 && a[1].size() == 0 && a[0][0] < a[2][0]) cout << s.size() << endl;
	else if (a[0].size() == 1 && a[2].size() == 0 && a[1][a[1].size() - 1] < a[0][0]) cout << s.size() << endl;
	else if (a[0].size() == 1 && a[1].size() != 0 && a[2].size() != 0 && a[1][a[1].size() - 1] < a[0][0] && a[0][0] < a[2][0]) cout << max(a[1].size(), a[2].size()) + 1 << endl;
	else cout << -1 << endl;
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}