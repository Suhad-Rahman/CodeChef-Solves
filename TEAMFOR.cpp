#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    int n {};
    cin >> n;
    
    string s, t;
    cin >> s >> t;
    
    int exceptional = 0, noob = 0, count_s = 0, count_t = 0;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == '1' && t[i] == '1') {
            exceptional++;
        }
        else if(s[i] == '0' && t[i] == '0') {
            noob++;
        }
        else if(s[i] == '1') {
            count_s++;
        }
        else if(t[i] == '1') {
            count_t++;
        }
    }
    
    int teams = 0;
    
    int spec_pairs = min(count_s, count_t);
    teams += spec_pairs;
    count_s -= spec_pairs;
    count_t -= spec_pairs;
    
    int leftover_specs = count_s + count_t;
    int spec_with_exc = min(exceptional, leftover_specs);
    teams += spec_with_exc;
    exceptional -= spec_with_exc;
    
    int noob_with_exc = min(exceptional, noob);
    teams += noob_with_exc;
    exceptional -= noob_with_exc;
    
    teams += (exceptional / 2);
    
    cout << teams << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}