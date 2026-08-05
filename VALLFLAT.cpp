#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void solve() {
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int &x : a) {
        cin>>x;
    }
    
    while(1) {
        
        int idx = -1;
        int valley = -1;
        
        for(int i = 1; i < n-1; i++) {
            if(a[i] < min(a[i-1], a[i+1]) && a[i] > valley) {
                idx = i;
                valley = a[i];
            }
        }
        
        if(idx == -1) break;
        
        a[idx-1] = a[idx];
        a[idx+1] = a[idx];
    }
    int sum = accumulate(a.begin(), a.end(), 0);

    cout<<sum<<"\n";
}

int32_t main() {
    
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
    
return 0;
}
