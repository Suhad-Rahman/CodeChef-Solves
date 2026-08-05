#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    int t;
    cin>>t;
    
    while(t--) {
    	int x, y, p;
    	cin>>x>>y>>p;
    	
    	int move = 0;
    	
    	while(x*y < p) {
    	    
    	    if(x < y) {
    	        x++;
    	        move++;
    	    }
    	    else{ y++; move++; }
    	}
        cout<<move<<"\n";
    }
}
