#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    int x, y, z;
    cin>>x>>y>>z;
    
    int cnt = 0;
    
    if(y >= z) {
        cout<<-1<<"\n";
        return;
    }
    
    int price = x;
    int earning = 0;
    
    while(earning < price) {
        cnt++;
        price += y;
        earning += z;
    }
    cout<<cnt<<"\n";
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    solve();
	}
return 0;
}
