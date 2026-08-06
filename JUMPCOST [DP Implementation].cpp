#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    
    int n;
    cin>>n;
    
    vector<int>a(n+1);
    
    for(int i = 1; i<=n; i++) {
        cin>>a[i];
    }
    
    vector<int>dp(n+1, -1e9);
    
    dp[1] = 0;
    
    int balance = 0;
    
    for(int j = 2; j <= n; j++) {
        for(int i = 1; i < j; i ++) {
            if(dp[i] != -1e9) {
                int prof = a[j] - j + i;
                
                dp[j] = max(dp[j], prof + dp[i]);
            }
        }
        balance = max(balance, dp[j]);
    }
    cout<<balance<<"\n";
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }

return 0;
}
