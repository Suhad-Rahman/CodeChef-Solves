#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    
    // if(x1 == y2 && x2 == y1) {
    //     cout<<1<<"\n";
    //     return;
    // }
    
    // if(x1 % 2 != x2 % 2) {
    //     cout<<-1<<"\n";
    //     return;
    // }
    
    // if(y1 % 2 != y2 % 2) {
    //     cout<<-1<<"\n";
    
    //     return;
    // }
    
    int dist1, dist2;
    
    dist1 = x1+y1;
    dist2 = x2 + y2;
    
    if(dist1 % 2 != dist2 % 2) {
        cout<<-1<<"\n";
        return;
    }
    
    if(abs(x1 - x2) == abs(y1 - y2)) {
        cout<<1<<"\n";
    }
    else{
        cout<<2<<"\n";
    }
    
    
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
