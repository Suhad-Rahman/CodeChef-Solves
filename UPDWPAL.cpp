#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int &x : a) {
        cin>>x;
    }
    
    int half = n/2;
    
    int mx = INT_MIN;
    int  mn = INT_MAX;
    
    for(int i=0; i<half; i++) {
        
        int x = a[i];
        int y = a[n-i-1];
        
        if(abs(x-y) == 0){
            continue;
        }
        
        if(abs(x-y) != 2) {
            cout<<"No\n";
            return;
        }
        
        int l = min(x, y);
        int r = (x+y) - l - 1;
        
        mx = max(mx, l);
        mn = min(mn, r);
        
    }
    
    cout<<((mx <= mn) ? "Yes\n" : "No\n");
    
}

int32_t main() {
	
	int t;
	cin>>t;
	
	while(t--) {
	    solve();
	}
	
return 0;
}
