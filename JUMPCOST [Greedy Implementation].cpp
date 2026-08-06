#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {

    int n;
    cin >> n;

    vector < int > a(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    int ans = 0;
    int prev = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > 0) sum += a[i];

        int after_cost = sum - i;

        ans = max(ans, after_cost);
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}