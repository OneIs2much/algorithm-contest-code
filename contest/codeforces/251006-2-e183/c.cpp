#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int l = 0, r = 0, la = 0, lb = 0;
	std::vector<int> a, b;
	for (int i = 0; i < n; i ++ ) {
		if (s[i] == 'a') {
			l ++ ;
			if (r != 0) b.push_back(r);
			lb += r;
			r = 0;
		}
		else {
			r ++ ;
			if (l != 0) a.push_back(l);
			la += l;
			l = 0;
		}
	}
	if (r != 0) b.push_back(r);
	if (l != 0) a.push_back(l);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	lb += r;
	la += l;
	if (lb == la) {
		cout << 0 << endl;
		return;
	}
	if (lb == 0 || la == 0) {
		cout << -1 << endl;
		return;
	}
	if (lb > la) {
		l = lb - la;
		if (b[b.size() - 1] < l) {
			cout << -1 << endl;
			return;
		}
		cout << l << endl;
	}

	if (lb < la) {
		l = la - lb;
		if (a[a.size() - 1] < l) {
			cout << -1 << endl;
			return;
		}
		cout << l << endl;
	}
	
}

int main () {
	int T = 1;
	cin >> T;
	while (T -- ) {
		solve();
	}
}