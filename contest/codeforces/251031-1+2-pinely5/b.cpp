#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

int d[][][] = {{{0, -1}, {-1, 0}}, {{0, -1}, {1, 0}}, {{0, 1}, {-1, 0}}, {{0, 1}, {1, 0}}, {{-1, 0}, {0, -1}}, {{1, 0}, {0, -1}}, {{-1, 0}, {0, 1}}, {{1, 0}, {0, 1}}};

void bfs(vector<pair<int, int>> &b, vector<string> &g, int nx, int ny, int n) {

	for (int i = 0; i < 8; i ++ ) {
		int tx = nx, ty = ny;
		for (int j = 0; j < 2; j ++ ) {
			tx += d[i][j][0], ty += d[i][j][1];
			if (tx > 0 && tx < n && ty > 0 && ty < n)
		}
	}
}

void solve() {
	int n;
	cin >> n;
	vector<string> g(n);
	for (int i = 0; i < n; i ++ ) cin >> g[i];

	vector<pair<int, int>> b;

	for (int i = 0; i < n; i ++ ) {
		for (int j = 0; j < n; j ++ ) {
			if (g[i][j] == '#') {
				b.push_back({i, j});
			}
		}
	}

	if (b.size() <= 1) {
		cout << "YES" << endl;
		return;
	}

	int nums = b.size();
	vector<int> flag(nums, 0);

}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}
