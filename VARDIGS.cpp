#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int d1 = n%10;
    n /= 10;
    int d2 = n;
    
    cout<<((d1 == d2) ? "No" : "Yes");
return 0;
}
