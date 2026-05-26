#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;

	vector<vector<int>> v(n + 1);
	vector<vector<int>> v1(n + 1);

	for (int i = 1; i < n; i ++ ) {
		int u, w;
		cin >> u >> w;
		v[u].push_back(w);
		v1[w].push_back(u);
	}

	// priority_queue<pair<int, int>> q;

	int t = n;
	string s = " ";
	s = s + char(t + '0');
	while (t != 1) {
		t = v1[t][0];
		s = s + char(t + '0');
	}
	vector<pair<int, int>> ans;

	for (int i = s.size() - 1; i > 1; i -- ) {
		for (int j = 0; j < v[s[i] - '0'].size(); j ++ ) {
			if (v[s[i] - '0'][j] != s[i - 1] - '0') {
				ans.push_back({2, v[s[i] - '0'][j]});
			}
		}
		ans.push_back({1, 0});
		if (i != 2) ans.push_back({2, s[i] - '0'});
	}

	cout << ans.size() << endl;
	for (auto i : ans) {
		if (i.first == 1) {
			cout << 1 << endl;
		}
		else {
			cout << i.first << ' ' << i.second << endl;
		}
	}
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}