#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

i64 p(int x) {
    i64 t = 1;
    for (int i = 0; i < x; i ++ ) {
        t *= 10ll;
    }
    return t;
}

void solve() {
    i64 a, n;
    cin >> a >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i ++ ) {
        cin >> d[i];
    }
    unordered_map<int, pair<int, int>> m;
    for (int i = 0; i < n; i ++ ) {
        int l = i, r = (i + 1) % n;
        int j = d[l];
        m[j] = {j, j};
        while (1) {
            j = (j + 1) % 10;
            if (j == d[r])
                break;
            m[j] = {d[l], d[r]};
        }
        m[j] = {d[r], d[r]};
    }

    int k = 17;
    for (int i = 17; i >= 0; i -- ) {
        if (a / p(i) == 0)
            k--;
        else
            break;
    }
    if (k == -1)
        k = 0;
    k++;
    i64 ans = 1e18;
    for (int i = (1 << k) - 1; i >= 0; i -- )
    {
        i64 res = 0;
        for (int j = k - 1; j >= 0; j -- ) {
            if ((i >> j) % 2 == 1)
            res += m[a / p(j + 1) % 10].first * p(j);
            else res += m[a / p(j + 1) % 10].second * p(j);
        }
        ans = min(ans, abs(res - a));
    }    
    if (k > 1)
    for (int i = (1 << (k - 1)) - 1; i >= 0; i -- )
    {
        i64 res = 0;
        for (int j = k - 2; j >= 0; j -- ) {
            if ((i >> j) % 2 == 1)
            res += m[a / p(j + 1) % 10].first * p(j);
            else res += m[a / p(j + 1) % 10].second * p(j);
        }
        ans = min(ans, abs(res - a));
    }
    cout << ans << endl;
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