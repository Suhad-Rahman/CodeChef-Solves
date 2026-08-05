#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    
    int n, x, y;
    cin>>n>>x>>y;
    
    if(n <= 3) {
        cout<<n*x<<"\n";
        return;
    }
    
    int cost = 3*x;
    n -= 3;
    
    cost += n*y;
    
    cout<<cost<<"\n";
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
