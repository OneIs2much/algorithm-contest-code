#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    if (n == 2) {
        cout << 1 << endl;
        return;
    }
    if (n == 3) {
        cout << 1 << endl;
        return;
    }
    int d = min(abs(x1 - x2), abs(x1 + n - x2));
    cout << d + k << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test_cases = 1;
    cin >> test_cases;

    while (test_cases -- )
    {
        solve();
    }
}