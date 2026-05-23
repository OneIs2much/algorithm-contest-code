#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, cnt = 0, c1 = 0, c2 = 0;
    cin >> n;
    for (int i = 0; i < n; i ++ ) {
        int a;
        cin >> a;
        if (a == 0)
            cnt++;
        else if (a == 1)
            c1++;
        else
            c2++;
    }
    cout << cnt + min(c1, c2) + abs(c1 - c2) / 3 << endl;
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