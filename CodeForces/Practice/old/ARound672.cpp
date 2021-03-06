#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin>>a[i];

    bool sorted = true;

    for(int i = 0; i < n-1; i++) {
        if(a[i] <= a[i+1]){
            sorted = false;
            break;
        }
    }
    
    cout << (sorted ? "NO" : "YES") << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--) {
        solve();
    }
}